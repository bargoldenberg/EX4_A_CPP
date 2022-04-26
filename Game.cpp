#include <iostream>
#include "Game.hpp"
#include <string>
#include <vector>
using namespace std;
using namespace coup;

Game::Game(){
    this->player_list.resize(0);
}

vector<string> Game::players(){
    return this->player_list;
} 

int Game::turn(){
    return 0;
}