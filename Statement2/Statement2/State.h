#pragma once
#include <SDL.h>
#include <iostream>
#include "Mouse.h"
#include "Button.h"
class State {
public:
	static Mouse* mouse;
	static SDL_Window* win;
	static SDL_Renderer* ren;
	SDL_Texture* backgroundTexture;
	static State* current, * menu, * options;
	SDL_Event event;
	bool running = true;
	bool game_running = false;
	virtual void enter() = 0;
	virtual void update() = 0;
	virtual void exit() = 0;
	State();
	virtual ~State();
};

class MainMenu : public State {
public:
	Button* startButton;
	Button* exitButton;
	MainMenu();
	~MainMenu();
	void enter();
	void update();
	void exit();
};

class FightScene : public State {
public:
	Button* menuButton;
	FightScene();
	~FightScene();
	void enter();
	void update();
	void exit();
};