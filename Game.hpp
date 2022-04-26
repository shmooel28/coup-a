#pragma once

#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Game
    {
        public:
            vector<string> player;
            int tur = 0;
            Game();
            vector<string> players();
            string turn();
            string winner();
    };
}