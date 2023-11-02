/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:11:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 14:38:06 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

#include "ICharacter.hpp"

AMateria::AMateria():type("Default"){}

AMateria::AMateria(std::string const& initType)
{
    this->type = initType;
}
AMateria::AMateria(const AMateria& obj)
{
    this->type = obj.type;
}

AMateria& AMateria::operator=(const AMateria & obj)
{
    type =obj.type;
    return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{   
    std::cout << "use a materia"<< target.getName() << std::endl;
}