#include "Duke.hpp"

using namespace std;


namespace coup
{
    Duke::Duke(Game &x,string name) : Player(x,name)
    {
    }
    void Duke::take_three(){this->coin+=3;}
    void Duke::tax(){cout<<"tax"<<endl;}
    void Duke::block(Player p){cout<<"block"<<endl;}
}