#include <iostream>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include "Duke.hpp"
using namespace std;
using namespace coup;

Duke::Duke(Game g,string name){
    this->name=name;
    this->balance=0;
}

void Duke::block(Player p){

}

void Duke::tax(){

}

string Duke::role(){
    return "Duke";
}