
#include "Weapon.hpp"

class HumanA
{
    public: 
        HumanA(std::string initName,Weapon &wea):weapon(wea),name(initName)
        {
        };
        void attack();
    private:
        Weapon &weapon;
        std::string name;
};
