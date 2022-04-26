#include "Captain.hpp"
using namespace std;


namespace coup
{
    Captain::Captain(Game &x,string name) : Player(x,name)
    {
    }
    void Captain::steal(Player p){cout<<"coup"<<endl;}
    void Captain::block(Player p){cout<<"block"<<endl;}
}