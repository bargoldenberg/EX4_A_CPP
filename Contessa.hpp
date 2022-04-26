#pragma once
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
namespace coup{
    class Contessa : public Player{
        public:
            Contessa(Game g,string name);
            void block(Assassin a);
            string role();
    };
}