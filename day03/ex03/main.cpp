#include "DiamondTrap.hpp"



int main()
{
    DiamondTrap obj = DiamondTrap("salma");
    std::string p="kawtar";
    obj.attack(p);
    obj.takeDamage(50);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(1);
    obj.takeDamage(50);
    obj.whoAmI();

}