#include "Zombie.hpp"

void  Zombie::setName(std::string initName)
{
    name=initName;
}
std::string Zombie::getName()
{
    return name;
}
void Zombie::announce( void )
{
    std::cout << getName()<< " : BraiiiiiiinnnzzzZ..."<< std::endl;
}