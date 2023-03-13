#include "State.h"
#include <SDL_image.h>
#include <iostream>

SDL_Window* State::win = 0;
SDL_Renderer* State::ren = 0;
State* State::current = 0;
State* State::menu = 0;
State* State::options = 0;
Mouse* State::mouse = 0;


State::State() {

	if (!win) { // only happen once
		win = SDL_CreateWindow("Copymon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, NULL);
		ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
		mouse = new Mouse(ren);
	}
}

State::~State() {
	
}

MainMenu::MainMenu() {
	backgroundTexture = IMG_LoadTexture(ren, "CopymonBG.png");
	startButton = new Button(ren, 0, 0);
	startButton->setPos(1280 / 2 - (285 / 2), 350);
	exitButton = new Button(ren, 0, 64);
	exitButton->setPos(1280 / 2 - (285 / 2), 450 );
}

MainMenu::~MainMenu() {
	delete startButton;
}

void MainMenu::enter() {
	//Start up the music
	//center the mouse cursor on screen?

	running = true;
}

void MainMenu::update() {
	//get input
	while (running) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				 SDL_Quit();
				 std::exit(0); //bad form
			case SDL_MOUSEBUTTONUP:
				if (event.button.button == SDL_BUTTON_LEFT) {
					if (startButton->selected) {
						current = options;
						running = false;
						break; 
					}
					if (exitButton->selected) {
						SDL_Quit();
						break;
					}
				}
			}// end switch
		}// end poll loop
		mouse->update(); //mouse  
		startButton->update(mouse);//update buttons
		exitButton->update(mouse);//update buttons
		SDL_RenderClear(ren);
		//change states
		SDL_RenderCopy(ren, backgroundTexture, NULL, NULL);
		startButton->draw(ren);//draw()
		exitButton->draw(ren);//draw()
		mouse->draw(ren);

		SDL_RenderPresent(ren);	
	}//end main loop
}

void MainMenu::exit() {
	//disable mouse?
	//stop music? change music?
	//play sound
}

FightScene::FightScene() {
	backgroundTexture = IMG_LoadTexture(ren, "CopymonFS.png");
	menuButton = new Button(ren, 0, 128);
	menuButton->setPos(1280, 1280);
}

FightScene::~FightScene() {

}

void FightScene::enter() {
	running = true;
}

void FightScene::update() {
	//get input
	while (running) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				SDL_Quit();
				std::exit(0); //bad form
			case SDL_MOUSEBUTTONUP:
				if (event.button.button == SDL_BUTTON_LEFT) {
					if (menuButton->selected) {
						current = menu;
						running = false;
						break;
					}
				}
			}// end switch
		}// end poll loop
		mouse->update();
		menuButton->update(mouse);
		SDL_RenderClear(ren);

		SDL_RenderCopy(ren, backgroundTexture, NULL, NULL);
		menuButton->draw(ren);
		mouse->draw(ren);

		SDL_RenderPresent(ren);
	}
}

void FightScene::exit() {

}