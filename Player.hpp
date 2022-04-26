#pragma once

#include<string>
#include<iostream>
#include<vector>
#include"Game.hpp"

using namespace std;


namespace coup
{
    class Player
    {
        public:
            int coin;
            string name;
            string rol;
            Game game;
            Player(Game &g, string name);
            void income();
            void foreign_aid();
            void coup(Player p);
            int coins();
            string role();
    };
}
    