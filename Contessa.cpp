#include "Contessa.hpp"
using namespace std;


namespace coup
{
    Contessa::Contessa(Game &x,string name) : Player(x,name)
    {
    }
    void Contessa::block(Player p){cout<<"coup"<<endl;}
}