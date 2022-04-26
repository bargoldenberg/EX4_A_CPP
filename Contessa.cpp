#include <iostream>
#include "Assassin.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <string>
using namespace std;
using namespace coup;

Contessa::Contessa(Game g, string name){
    this->name = name;
}

void Contessa::block(Assassin a){

}

string Contessa::role(){
    return "Contessa";
}