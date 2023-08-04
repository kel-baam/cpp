#include "Zombie.hpp"


int main()
{
    int i =0;

    Zombie *zombies = zombieHorde( 5, "hza" );
    i =0;
    while(i < 4)
    {
        std::cout << zombies[i].getName()<<std::endl;
        i++;
    }


}