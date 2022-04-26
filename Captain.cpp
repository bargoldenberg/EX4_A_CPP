#include <iostream>
#include "Captain.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <string>
using namespace std;
using namespace coup;

Captain::Captain(Game g, string name){
    this->name=name;
}

void Captain::steal(Player p){
    p.balance-=2;
    this->balance+=2;
}

string Captain::role(){
    return "Captain";
}

void Captain::block(Player p){

}

