/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:11:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 15:43:16 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

#include "ICharacter.hpp"

AMateria::AMateria():_type("Default"){}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}
AMateria::AMateria(const AMateria& obj)
{
    this->_type = obj._type;
}

AMateria& AMateria::operator=(const AMateria & obj)
{
    _type =obj._type;
    return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{   
    std::cout << "use a materia"<< target.getName() << std::endl;
}