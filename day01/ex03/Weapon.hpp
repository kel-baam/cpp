#ifndef WEAPON_HPP
#define  WEAPON_HPP
#include <iostream>

class Weapon
{   
    public:
        Weapon(){};
        Weapon(std::string type);
        void setType(std::string initType);
        const std::string &getType();
    private:
        std::string type;

};
#endif