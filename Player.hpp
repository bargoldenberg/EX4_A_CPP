#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace coup{
    class Player{
        protected:  
            string name;
        public:
            //Player();            
            void income();
            void foreign_aid();
            void coup(Player p);
            int coins();
            int balance;
    };
}