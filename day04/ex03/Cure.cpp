/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:12:02 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 12:46:07 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    _type = "cure";
}
Cure::Cure(const std::string & type)
{
    _type = type;
}
Cure::Cure(const Cure & obj)
{
    operator=(obj);
}
Cure& Cure::operator=(const Cure &obj)
{
    _type = obj._type;
    return *this;
}
Cure::~Cure()
{
    std::cout << "Core Destructor"<< std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << " Cure: " << "* heals " << target.getName() << "'s" << " wounds *" << std::endl;
}
