#include <iostream>
class Zombie
{
    public:
        Zombie(){};
        ~Zombie(){};
        void setName(std::string initName);
        std::string getName();
        void announce( void );
        void randomChump( std::string name );;
    private:
        std::string name;
};