//Lab2_num_obj.cpp

//This Lab will ...

#include <iostream>
#include <cstdlib>
#define RPG_H
using namespace std;

const int SKILL_SIZE = 2;

class RPG 
{
//constructors
public:
RPG();
RPG(string name, int health, int strength, int defense, string type, Point fighter);

RPG getName() const;

private:
void set_skills ();
void print_action (string a, RPG b);
void update_health (int a);
void attack (RPG);
void use_skills (RPG);

const bool is_alive;
RPG getName() const;
const string get_name;
const int get_health;
const int get_strength;
const int get_defense;



string type; // warrior, mage, thief, archer.
string skills[SKILL_SIZE];

};