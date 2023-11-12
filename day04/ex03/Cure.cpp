/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:12:02 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/03 13:22:58 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const std::string & iniType)
{
    type = iniType;
}

Cure::Cure(const Cure & obj)
{
    operator=(obj);
}

Cure& Cure::operator=(const Cure &obj)
{
    (void)obj;
    return *this;
}

Cure::~Cure()
{}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << " Cure: " << "* heals " << target.getName() << "'s" << " wounds *" << std::endl;
}
