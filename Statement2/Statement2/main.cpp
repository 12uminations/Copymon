#include <iostream>
#include <SDL.h>
#include "State.h"
using namespace std;

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);

	State::menu = new MainMenu();
	State::options = new FightScene();
	State::current = State::menu;

	while (1) {
		State::current->enter();
		State::current->update();
		State::current->exit();
	}
	return 0;
}