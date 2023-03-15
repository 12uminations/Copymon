#include "Button.h"

Button::Button() {
	static SDL_Texture* Fight = IMG_LoadTexture(ren, "Assent/FIGHT1.png");
	tex = Fight;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 80;
	drect.w = 100;
}

Button::~Button() {
}

void Button::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 75;
		drect.w = 95;
	}
	else {
		isSelected = false;
		drect.h = 80;
		drect.w = 100;
	}
}

void Button::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


////////////////////////////////////

Button2::Button2() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/HEAL1.png");
	tex2 = Heal;

	srect2.h = 600;
	srect2.w = 800;
	srect2.x = 0;

	drect2.h = 80;
	drect2.w = 100;
}

Button2::~Button2() {
}

void Button2::update2(Mouse& mouse) {
	if (SDL_HasIntersection(&drect2, &mouse.point)) {
		isSelected2 = true;
		drect2.h = 75;
		drect2.w = 95;
	}
	else {
		isSelected2 = false;
		drect2.h = 80;
		drect2.w = 100;
	}
}

void Button2::draws2() {
	SDL_RenderCopy(ren, tex2, &srect2, &drect2);
}

////////////////////////////////////////////////////////////
Button3::Button3() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/SWITCH1.png");
	tex3 = Heal;

	srect3.h = 600;
	srect3.w = 800;
	srect3.x = 0;

	drect3.h = 80;
	drect3.w = 100;
}

Button3::~Button3() {
}

void Button3::update3(Mouse& mouse) {
	if (SDL_HasIntersection(&drect3, &mouse.point)) {
		isSelected3 = true;
		drect3.h = 75;
		drect3.w = 95;
	}
	else {
		isSelected3 = false;
		drect3.h = 80;
		drect3.w = 100;
	}
}

void Button3::draws3() {
	SDL_RenderCopy(ren, tex3, &srect3, &drect3);
}
////////////////////////////////////////////////////////////
Num1::Num1() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN1.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 80;
	drect.w = 100;
}

Num1::~Num1() {
}

void Num1::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num1::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
////////////////////////////////////////////////////////////
Num2::Num2() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN2.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num2::~Num2() {
}

void Num2::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num2::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

Num3::Num3() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN3.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num3::~Num3() {
}

void Num3::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num3::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num4::Num4() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN4.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num4::~Num4() {
}
void Num4::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num4::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num5::Num5() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN5.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num5::~Num5() {
}
void Num5::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num5::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num6::Num6() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN6.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num6::~Num6() {
}
void Num6::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num6::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num7::Num7() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN7.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num7::~Num7() {
}
void Num7::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num7::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num8::Num8() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN8.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num8::~Num8() {
}
void Num8::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num8::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num9::Num9() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN9.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num9::~Num9() {
}
void Num9::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num9::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////////////////
Num10::Num10() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/ButtonN10.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

Num10::~Num10() {
}
void Num10::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void Num10::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
////////////////////////////////////////////////////////
pokeuse1::pokeuse1() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/abomasnow.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 50;
	drect.w = 50;
}

pokeuse1::~pokeuse1() {
}
void pokeuse1::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void pokeuse1::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
///////////////////////////////////////////

///////////////////////////////////////////////////////
charizard::charizard() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_charizard.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 500;
	drect.w = 500;
}

charizard::~charizard() {
}
void charizard::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void charizard::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}





garchomp::garchomp() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_garchomp.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 600;
	drect.w = 600;
}

garchomp::~garchomp() {
}
void garchomp::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void garchomp::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
/// <summary>
/// ///////////////////////////////////////////////////////////////////////////
/// </summary>
absol::absol() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_absol.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 500;
	drect.w = 500;
}

absol::~absol() {
}
void absol::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void absol::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


///////////////////////////////////////////////////////////////////

gardevoir::gardevoir() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_gardevoir.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 600;
	drect.w = 600;
}

gardevoir::~gardevoir() {
}
void gardevoir::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void gardevoir::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

///////////////////////////////////////////////////////////////////

gengar::gengar() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_gengar.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 500;
	drect.w = 500;
}

gengar::~gengar() {
}
void gengar::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void gengar::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

///////////////////////////////////////////////////////////////////

lucario::lucario() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_lucario.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 600;
	drect.w = 600;
}

lucario::~lucario() {
}
void lucario::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void lucario::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


///////////////////////////////////////////////////////////////////

venusaur::venusaur() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_venusaur.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 500;
	drect.w = 500;
}

venusaur::~venusaur() {
}
void venusaur::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void venusaur::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


///////////////////////////////////////////////////////////////////

snorlax::snorlax() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_snorlax.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 500;
	drect.w = 500;
}

snorlax::~snorlax() {
}
void snorlax::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void snorlax::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

///////////////////////////////////////////////////////////////

blastoise::blastoise() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_blastiose.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 600;
	drect.w = 600;
}

blastoise::~blastoise() {
}
void blastoise::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void blastoise::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

///////////////////////////////////////////////////////////////

abomasnow::abomasnow() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/back_abomasnow.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 600;
	drect.w = 600;
}

abomasnow::~abomasnow() {
}
void abomasnow::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void abomasnow::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

//////////////////////////////////////////////////////

rocketgang::rocketgang() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/rocket_gang.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 100;
	drect.w = 100;
}

rocketgang::~rocketgang() {
}
void rocketgang::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void rocketgang::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////

front_charizard::front_charizard() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_charizard.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 250;
	drect.w = 250;
}

front_charizard::~front_charizard() {
}
void front_charizard::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_charizard::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////

front_blastiose::front_blastiose() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_blastiose.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_blastiose::~front_blastiose() {
}
void front_blastiose::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_blastiose::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////
front_venusaur::front_venusaur() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_venusaur.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_venusaur::~front_venusaur() {
}
void front_venusaur::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_venusaur::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////
front_snorlax::front_snorlax() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_snorlax.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_snorlax::~front_snorlax() {
}
void front_snorlax::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_snorlax::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}



//////////////////////////////////////////////////////
front_lucario::front_lucario() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_lucario.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_lucario::~front_lucario() {
}
void front_lucario::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_lucario::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}

//////////////////////////////////////////////////////
front_gengar::front_gengar() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_gengar.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_gengar::~front_gengar() {
}
void front_gengar::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_gengar::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////
front_gardevoir::front_gardevoir() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_gardevoir.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_gardevoir::~front_gardevoir() {
}
void front_gardevoir::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_gardevoir::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}



//////////////////////////////////////////////////////
front_garchomp::front_garchomp() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_garchomp.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_garchomp::~front_garchomp() {
}
void front_garchomp::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_garchomp::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////
front_abomasnow::front_abomasnow() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_abomasnow.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_abomasnow::~front_abomasnow() {
}
void front_abomasnow::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_abomasnow::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}


//////////////////////////////////////////////////////
front_absol::front_absol() {
	static SDL_Texture* Heal = IMG_LoadTexture(ren, "Assent/front_absol.png");
	tex = Heal;

	srect.h = 600;
	srect.w = 800;
	srect.x = 0;

	drect.h = 200;
	drect.w = 200;
}

front_absol::~front_absol() {
}
void front_absol::update(Mouse& mouse) {
	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		drect.h = 45;
		drect.w = 45;
	}
	else {
		isSelected = false;
		drect.h = 50;
		drect.w = 50;
	}
}

void front_absol::draws() {
	SDL_RenderCopy(ren, tex, &srect, &drect);
}
