#pragma once
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Captain : public Player{
        public:
            Captain(Game g,string name);
            void steal(Player p);
            void block(Player p);
            string role();
    };
}