#pragma once
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Assassin : public Player{
        public:
            Assassin(Game g,string name);
            void coup(Player p);
            string role();
    };
}