#include "Mouse.h"

void Mouse::update() {
	SDL_GetMouseState(&rect.x, &rect.y);
	point.x = rect.x;
	point.y = rect.y;
}

void Mouse::draw(SDL_Renderer* ren) {
	SDL_RenderCopy(ren, tex, NULL, &rect); 
}

Mouse::Mouse(SDL_Renderer* ren) {
	tex = IMG_LoadTexture(ren, "Pokeball.png");
	rect.x = rect.y = 0;
	rect.w = 50;
	rect.h = 50;
	SDL_ShowCursor(0);
	point.x = point.y = 0;
	point.w = point.h = 1;
}

Mouse::~Mouse() {

}