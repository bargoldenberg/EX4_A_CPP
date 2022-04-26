//#pragma once
#include "doctest.h"
#include <iostream>
#include "Duke.hpp"
#include "Game.hpp"
using namespace coup;
using namespace std;
TEST_CASE("test case"){
    int count =0;
    for(int i=1;i<=20;i++){
        Game g1{};
        Duke duke{g1,"Bar"};
        duke.income();
        count++;
        CHECK(count==duke.coins());
    }
}