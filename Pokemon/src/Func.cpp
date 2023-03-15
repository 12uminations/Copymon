#include "Func.h"
float dmg;
int Unit::beAttacked(int oppatk, string movetype, int moveatk) {
    if (protect_on == true) dmg = 0;
    else {
        if (movetype == "Fire") {
            if (type == "Grass") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Ice") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fire") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Water") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dragon") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dark") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Grass") {
            if (type == "Water") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Ice") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Grass") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fire") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fairy") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fighting") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Dragon") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dark") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Water") {
            if (type == "Fire") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Grass") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Water") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dragon") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dark") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = (moveatk + oppatk - def) * 2.0;
        }
        if (movetype == "Fighting") {
            if (type == "Normal") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Ghost") dmg = 0;
            if (type == "Ice") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Dark") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fighting") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Grass") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fairy") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fire") dmg = moveatk + oppatk - def;
            if (type == "Dragon") dmg = moveatk + oppatk - def;
            if (type == "Water") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Dragon") {
            if (type == "Dragon") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fairy") dmg = 0;
            if (type == "Fire") dmg = moveatk + oppatk - def;
            if (type == "Grass") dmg = moveatk + oppatk - def;
            if (type == "Water") dmg = moveatk + oppatk - def;
            if (type == "Dark") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Ice") {
            if (type == "Dragon") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Grass") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Water") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fire") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Ice") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fairy") dmg = moveatk + oppatk - def;
            if (type == "Dark") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Dark") {
            if (type == "Ghost") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fighting") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Dragon") dmg = moveatk + oppatk - def;
            if (type == "Grass") dmg = moveatk + oppatk - def;
            if (type == "Water") dmg = moveatk + oppatk - def;
            if (type == "Fire") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = moveatk + oppatk - def;
            if (type == "Dark") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Normal") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Ghost") {
            if (type == "Ghost") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Normal") dmg = 0;
            if (type == "Dark") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Dragon") dmg = moveatk + oppatk - def;
            if (type == "Grass") dmg = moveatk + oppatk - def;
            if (type == "Water") dmg = moveatk + oppatk - def;
            if (type == "Fire") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Fairy") {
            if (type == "Fighting") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Dark") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Dragon") dmg = (moveatk + oppatk - def) * 2.0;
            if (type == "Fire") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Grass") dmg = (moveatk + oppatk - def) / 2.0;
            if (type == "Water") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = moveatk + oppatk - def;
            if (type == "Ghost") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
        }
        if (movetype == "Normal") {
            if (type == "Ghost") dmg = 0;
            if (type == "Fire") dmg = moveatk + oppatk - def;
            if (type == "Grass") dmg = moveatk + oppatk - def;
            if (type == "Water") dmg = moveatk + oppatk - def;
            if (type == "Dragon") dmg = moveatk + oppatk - def;
            if (type == "Dark") dmg = moveatk + oppatk - def;
            if (type == "Normal") dmg = moveatk + oppatk - def;
            if (type == "Fighting") dmg = moveatk + oppatk - def;
            if (type == "Ice") dmg = moveatk + oppatk - def;
            if (type == "Fairy") dmg = moveatk + oppatk - def;
        }
    }
    if (dmg < 0) dmg = -dmg;
    hp = hp - dmg;
    if (hp <= 0) hp = 0;
    return dmg;
}
int Unit::attack(Unit& x, int y) {
    if (y == 1) return x.beAttacked(atk, move1type, move1atk);
    else if (y == 2) return x.beAttacked(atk, move2type, move2atk);
    else if (y == 3) return x.beAttacked(atk, move3type, move3atk);
}
void Unit::protect() {
    protect_on = true;
}
Unit::Unit(string a, string b, int c, int d, int e, int q, int r, string f, string g, int h, string i, string j, int k, string l, string m, int n, string o, bool p) {
    name = a;
    type = b;
    hpmax = c;
    atk = d;
    def = e;
    spe = q;
    hp = r;
    move1 = f;
    move1type = g;
    move1atk = h;
    move2 = i;
    move2type = j;
    move2atk = k;
    move3 = l;
    move3type = m;
    move3atk = n;
    move4 = o;
    protect_on = p;
}

vector<string> Unit::getSelect2() {
    vector<string> s;
    s.push_back(name);
    s.push_back(type);
    return s;
}
vector<int> Unit::getSelect() {
    vector<int> x;
    x.push_back(hpmax);
    x.push_back(atk);
    x.push_back(def);
    x.push_back(spe);
    return x;
}
vector<string> Unit::getSelect3() {
    vector<string> s;
    s.push_back(move1);
    s.push_back(move1type);
    s.push_back(move2);
    s.push_back(move2type);
    s.push_back(move3);
    s.push_back(move3type);
    s.push_back(move4);
    return s;
}
vector<int> Unit::getSelect4() {
    vector<int> x;
    x.push_back(move1atk);
    x.push_back(move2atk);
    x.push_back(move3atk);
    return x;
}
int Unit::heal() {
    int h = 60;
    if (hp + h > hpmax) h = hpmax - hp;
    hp = hp + h;
    return hp;
}
void Unit::showStatusforP1() {
    cout << "Player1--------------------------------\n";
    cout << name << "\n";
    cout << "HP: " << hp << "/" << hpmax << "\tATK: " << atk << "\t\tDEF: " << def;
    cout << "\n---------------------------------------\n";
}
void Unit::showStatusforP2() {
    cout << "\t\t\t\tPlayer2--------------------------------\n";
    cout << "\t\t\t\t" << name << "\n";
    cout << "\t\t\t\tHP: " << hp << "/" << hpmax << "\t\tATK: " << atk << "\t\tDEF: " << def;
    cout << "\n\t\t\t\t---------------------------------------\n";
}
