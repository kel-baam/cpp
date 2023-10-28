#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class AMateria
{
    protected:
        std::string type;
    //HEERE
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& type);
        AMateria& operator=(std::string const & type);
        ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif