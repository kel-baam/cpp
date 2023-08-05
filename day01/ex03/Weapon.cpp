#include "Weapon.hpp"

 Weapon::Weapon(std::string initType)
 {
    type = initType;
 }
void Weapon::setType(std::string initType)
{
  type=initType;
}
//why &
const std::string& Weapon::getType()
{
  return type;
}