#include <iostream>
#include "Player.hpp"
using namespace std;
using namespace coup;

void Player::income(){
    this->balance++;
}

void Player::foreign_aid(){
    this->balance+=2;
}

void Player::coup(Player p){

}

int Player::coins(){
    return this->balance;
}


