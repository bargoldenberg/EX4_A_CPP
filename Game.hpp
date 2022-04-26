#pragma once
#include <iostream>
#include <vector>
using namespace std;
namespace coup{
    class Game{
        protected:
            vector<string> player_list;
        public:
            Game();
            vector<string> players();
            int turn();
    };
}