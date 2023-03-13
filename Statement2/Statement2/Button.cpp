#include "Button.h"


SDL_Texture* Button::tex = 0;
Button::Button(SDL_Renderer* ren, int x, int y) {
	if (!tex) {
		tex = IMG_LoadTexture(ren, "StartExit.png");
	}
	srect.h = 63;
	srect.w = 265;
	drect.h = 64;
	drect.w = 265;
	srect.x = x;
	srect.y = y;
}
Button::~Button() {

}

void Button::update(Mouse* mouse) {
	selected = false;
	if (SDL_HasIntersection(&mouse->point, &drect)) {
		selected = true;
		//play sound?
		srect.x = 265;
	}
	else {
		srect.x = 0;
	}
}

void Button::draw(SDL_Renderer* ren) {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

void Button::setPos(int x, int y) {
	drect.x = x;
	drect.y = y;
}