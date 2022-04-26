#include <iostream>
#include "Ambassador.hpp"
#include "Game.hpp"
#include <string>
#include "Captain.hpp"
using namespace std;
using namespace coup;

Ambassador::Ambassador(Game g,string name){
    this->balance=0;
}

void Ambassador::transfer(Player p1, Player p2){
    p1.balance--;
    p2.balance++;
}

void Ambassador::block(Captain c){

}

string Ambassador::role(){
    return "Ambassador";
}