
#include "AMateria.hpp"


AMateria::AMateria()
{
    std::cout << "AMateria  Default constructor "<< std::endl;
}
AMateria::AMateria(std::string const & type)
{
    this->type =type;
    std::cout << "AMateria  constructor paramitrize "<< std::endl;

}
AMateria::AMateria(const AMateria& obj)
{
    this->type =obj.type;
}
AMateria& AMateria::operator=(AMateria const & obj)
{
    type =obj.type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria  Default destructors"<< std::endl;
}
std::string const & AMateria::getType() const
{
    return type;
}

// void AMateria::use(ICharacter& target)
// {   

// }