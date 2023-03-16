#include "Mouse.h"

class Button {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Button();
	virtual ~Button();

	void update(Mouse&);
	void draws();
};

class Button2 {
public:
	SDL_Texture* tex2;
	SDL_Rect srect2, drect2;
	bool isSelected2 = false;

	Button2();
	virtual ~Button2();

	void update2(Mouse&);
	void draws2();
};

class Button3 {
public:
	SDL_Texture* tex3;
	SDL_Rect srect3, drect3;
	bool isSelected3 = false;

	Button3();
	virtual ~Button3();

	void update3(Mouse&);
	void draws3();
};

class Num1 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num1();
	virtual ~Num1();

	void update(Mouse&);
	void draws();
};

class Num2 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num2();
	virtual ~Num2();

	void update(Mouse&);
	void draws();
};

class Num3 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num3();
	virtual ~Num3();

	void update(Mouse&);
	void draws();
};

class Num4 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num4();
	virtual ~Num4();

	void update(Mouse&);
	void draws();
};
class Num5 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num5();
	virtual ~Num5();

	void update(Mouse&);
	void draws();
};
class Num6 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num6();
	virtual ~Num6();

	void update(Mouse&);
	void draws();
};
class Num7 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num7();
	virtual ~Num7();

	void update(Mouse&);
	void draws();
};
class Num8 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num8();
	virtual ~Num8();

	void update(Mouse&);
	void draws();
};
class Num9 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num9();
	virtual ~Num9();

	void update(Mouse&);
	void draws();
};
class Num10 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Num10();
	virtual ~Num10();

	void update(Mouse&);
	void draws();
};

class Start{
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Start();
	virtual ~Start();
	void setPos(int x, int y);
	void update(Mouse&);
	void draws();
};

class Exit {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Exit();
	virtual ~Exit();
	void setPos(int x, int y);
	void update(Mouse&);
	void draws();
};

class Back_button
{
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	Back_button();
	virtual ~Back_button();
	void setPos(int x, int y);
	void update(Mouse&);
	void draws();
};

class pokeuse1 {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	pokeuse1();
	virtual ~pokeuse1();

	void update(Mouse&);
	void draws();
};

class rocketgang {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	rocketgang();
	virtual ~rocketgang();

	void update(Mouse&);
	void draws();
};




class charizard {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	charizard();
	virtual ~charizard();

	void update(Mouse&);
	void draws();
};



class garchomp {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	garchomp();
	virtual ~garchomp();

	void update(Mouse&);
	void draws();
};


class absol {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	absol();
	virtual ~absol();

	void update(Mouse&);
	void draws();
};




class gardevoir {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	gardevoir();
	virtual ~gardevoir();

	void update(Mouse&);
	void draws();
};

class gengar {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	gengar();
	virtual ~gengar();

	void update(Mouse&);
	void draws();
};

class lucario {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	lucario();
	virtual ~lucario();

	void update(Mouse&);
	void draws();
};


class venusaur {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	venusaur();
	virtual ~venusaur();

	void update(Mouse&);
	void draws();
};

class snorlax {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	snorlax();
	virtual ~snorlax();

	void update(Mouse&);
	void draws();
};


class blastoise {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	blastoise();
	virtual ~blastoise();

	void update(Mouse&);
	void draws();
};





class abomasnow {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	abomasnow();
	virtual ~abomasnow();

	void update(Mouse&);
	void draws();
};


class front_charizard {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_charizard();
	virtual ~front_charizard();

	void update(Mouse&);
	void draws();
};

class front_blastiose {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_blastiose();
	virtual ~front_blastiose();

	void update(Mouse&);
	void draws();
};



class front_venusaur {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_venusaur();
	virtual ~front_venusaur();

	void update(Mouse&);
	void draws();
};


class front_snorlax {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_snorlax();
	virtual ~front_snorlax();

	void update(Mouse&);
	void draws();
};

class front_lucario {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_lucario();
	virtual ~front_lucario();

	void update(Mouse&);
	void draws();
};


class front_gengar {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_gengar();
	virtual ~front_gengar();

	void update(Mouse&);
	void draws();
};

class front_gardevoir {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_gardevoir();
	virtual ~front_gardevoir();

	void update(Mouse&);
	void draws();
};

class front_garchomp {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_garchomp();
	virtual ~front_garchomp();

	void update(Mouse&);
	void draws();
};

class front_abomasnow {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_abomasnow();
	virtual ~front_abomasnow();

	void update(Mouse&);
	void draws();
};

class front_absol {
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;

	front_absol();
	virtual ~front_absol();

	void update(Mouse&);
	void draws();
};

