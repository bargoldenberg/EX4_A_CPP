#include <iostream>
#include "Assassin.hpp"
#include "Game.hpp"
#include <string>
using namespace std;
using namespace coup;

Assassin::Assassin(Game g,string name){
    this->name = name;
}
string Assassin::role(){
    return "Assassin";
}

void Assassin::coup(Player p){

}
