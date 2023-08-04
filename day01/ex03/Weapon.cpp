#include "Weapon.hpp"

 Weapon::Weapon(std::string initType)
 {
    type = initType;
     std::cout << &type<<initType<< std::endl;

 }
void Weapon::setType(std::string initType)
{
  type=initType;
  std::cout << &type<<initType<< std::endl; 
 // std::cout<< &type<< std::endl;
}
//why &
const std::string& Weapon::getType()
{
  return type;
}