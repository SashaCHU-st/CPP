#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class Zombie
{
    private:
        string name;
    public:
        ~Zombie() { cout << "\nZombie destroyed"; }
        void announce(void);
}

void randomChump( std::string name )
{
    Zombie new_zombie = Zombie(name);
    new_zombie(announce);
}

Zombie* newZombie(std::string name)
{
    this->name = name;
}

void announce(void)
{
    cout << this->name <<BraiiiiiiinnnzzzZ... << endl;
}

int main()
{
    Zombie zombie("first");
    zombie.announce();
    randomChump("on stack");

}