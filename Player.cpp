#include "Player.hpp"

using namespace std;


namespace coup
{
    Player::Player(Game &g, string name)
    {
        this->game = g;
        this->name = name;
        this->coin = 0;
        this->game.player.push_back(name);
    }

    int Player::coins(){return this->coin;}
    void Player::income(){this->coin++;}
    void Player::foreign_aid(){this->coin+=2;}
    string Player::role(){return "this->rol";}
    void Player::coup(Player p){cout<<"player dad"<<endl;}
}