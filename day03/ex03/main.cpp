#include "DiamondTrap.hpp"



int main()
{
    DiamondTrap obj = DiamondTrap("salma");
    obj.attack("kawtar");
    obj.takeDamage(50);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(50);
    obj.whoAmI();

}