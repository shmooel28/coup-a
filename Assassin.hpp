#pragma once

#include<string>
#include<iostream>
#include<vector>
#include"Player.hpp"
#include"Game.hpp"
using namespace std;


namespace coup
{
    class Assassin: public Player
    {
        public:
            Assassin(Game &x, string name);
            void coup(Player p);
    };
}