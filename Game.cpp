#include "Game.hpp"

using namespace std;


namespace coup
{
    Game::Game(){};

    vector<string> Game::players(){return this->player;}
    string Game::turn(){return "this->tur";}
    string Game::winner(){return "winner";}
}