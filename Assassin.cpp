#include "Assassin.hpp"
using namespace std;


namespace coup
{
    Assassin::Assassin(Game &x,string name) : Player(x,name)
    {
    }
    void Assassin::coup(Player p){cout<<"coup"<<endl;}
}