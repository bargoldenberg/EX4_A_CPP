#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup{
    class Duke : public Player{  
        public:
            Duke(Game g,string name);
            void block(Player p);
            void tax();
            string role();
    };
}
