#include "Include.h"

class Unit {
public:
    int hpmax;
    string move1;
    string move1type;
    int move1atk;
    string move2;
    string move2type;
    int move2atk;
    string move3;
    string move3type;
    int move3atk;
    string move4;//protect
    bool protect_on;
    string name;
    string type;
    int hp;
    int def;
    int atk;
    int spe;

    Unit(string, string, int, int, int, int, int, string, string, int, string, string, int, string, string, int, string, bool);
    vector<int> getSelect();
    vector<string> getSelect2();
    vector<string> getSelect3();
    vector<int> getSelect4();
    void showStatusforP1();
    void showStatusforP2();
    void newTurn();
    int attack(Unit&, int);
    int beAttacked(int, string, int);
    int heal(Unit);
    void protect();
    bool isDead();
};
