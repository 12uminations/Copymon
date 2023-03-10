#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const string WINDOW_TITLE = "Copymon";

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
TTF_Font* font = nullptr;
SDL_Color font_color = { 255, 255, 255 };
SDL_Rect start_button;
SDL_Rect exit_button;
SDL_Texture* background_texture = nullptr;

void InitSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << endl;
        exit(1);
    }
    window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        cout << "Window could not be created! SDL_Error: " << SDL_GetError() << endl;
        exit(1);
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << endl;
        exit(1);
    }
    if (TTF_Init() < 0) {
        cout << "SDL_ttf could not initialize! SDL_ttf Error: " << TTF_GetError() << endl;
        exit(1);
    }
    font = TTF_OpenFont("Pokemon Solid.ttf", 24);
    if (!font) {
        cout << "Failed to load font! SDL_ttf Error: " << TTF_GetError() << endl;
        exit(1);
    }
    if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
        cout << "SDL_image could not initialize! SDL_image Error: " << IMG_GetError() << endl;
        exit(1);
    }
}

void QuitSDL() {
    TTF_CloseFont(font);
    TTF_Quit();s
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_DestroyTexture(background_texture);
    SDL_Quit();
}

void LoadTextures() {
    SDL_Surface* surface = IMG_Load("assent/Background.png");
    if (!surface) {
        cerr << "Failed to load background image! SDL_image Error: " << IMG_GetError() << endl;
        exit(1);
    }
    background_texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
}

void DrawText(string text, int x, int y) {
    SDL_Surface* surface = TTF_RenderText_Solid(font, text.c_str(), font_color);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect rect = { x, y, surface->w, surface->h };
    SDL_FreeSurface(surface);
    SDL_RenderCopy(renderer, texture, nullptr, &rect);
    SDL_DestroyTexture(texture);
}

void DrawButton(SDL_Rect rect, string text) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderFillRect(renderer, &rect);
    DrawText(text, rect.x + 40, rect.y + 10);
}

bool CheckCollision(int x, int y, SDL_Rect rect) {
    if (x > rect.x && x < rect.x + rect.w && y > rect.y && y < rect.y + rect.h) {
        return true;
    }
    return false;
}

void HandleEvents(bool& running, bool& game_running) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if (CheckCollision(event.button.x, event.button.y, start_button)) {
                game_running = true;
            }
            else if (CheckCollision(event.button.x, event.button.y, exit_button)) {
                running = false;
            }
            break;
        }
    }
}
int main(int argc, char* argv[]) {
    InitSDL();
    LoadTextures();
    bool running = true;
    bool game_running = false;

    start_button = { SCREEN_WIDTH / 2 - 75, SCREEN_HEIGHT / 2 - 50, 150, 50 };
    exit_button = { SCREEN_WIDTH / 2 - 75, SCREEN_HEIGHT / 2 + 50, 150, 50 };

    while (running) {
        HandleEvents(running, game_running);

        SDL_RenderCopy(renderer, background_texture, nullptr, nullptr); // render background texture first

        DrawButton(start_button, "Start");
        DrawButton(exit_button, "Exit");

        SDL_RenderPresent(renderer);

        if (game_running) {
            // start your game here
            game_running = false;
        }
    }

    QuitSDL();
    return 0;
}