/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:19:33 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 12:45:00 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(const std::string & type)
{
    _type = type;
}

Ice::Ice(const Ice& obj)
{
    operator=(obj);
}

Ice& Ice::operator=(const Ice &obj)
{
    //While assigning a Materia to another, copying the type doesn’t make sense
    _type = obj._type;
    return *this;
}

Ice::~Ice()
{}

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << " Ice: " << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
