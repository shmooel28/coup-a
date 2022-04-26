#pragma once

#include<string>
#include<iostream>
#include<vector>
#include"Player.hpp"
#include"Game.hpp"
using namespace std;


namespace coup
{
    class Ambassador: public Player
    {
        public:
            Ambassador(Game &x, string name);
            void transfer(Player a,Player b);
    };
}