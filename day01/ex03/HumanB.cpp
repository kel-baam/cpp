#include "HumanB.hpp"

void HumanB::attack()
{

        std::cout<< name << " attacks with their "<< (weapon->getType())<< std::endl;
    //else
        //std::cout<< name<< "has no weapon"<<std::endl;
}
void HumanB::setWeapon(Weapon &initWeapon)
{
    weapon=&initWeapon;
}