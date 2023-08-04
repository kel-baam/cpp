#include <iostream>
class Zombie
{
    public:
        Zombie(){};
        ~Zombie(){};
        void setName(std::string initName);
        std::string getName();
        void announce( void );
        static Zombie* zombieHorde( int N, std::string name );
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );