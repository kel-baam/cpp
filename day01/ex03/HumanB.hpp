#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string nm)
        {
            name = nm;
        };
        void attack();
        void setWeapon(Weapon &initWeapon);
    private:
        Weapon *weapon;
        std::string name;
};