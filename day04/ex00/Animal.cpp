/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:02:47 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/23 15:36:16 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal Default constructor "<< std::endl;
}

Animal::Animal(std::string type)
{
    _type =type;
}

Animal::~Animal()
{
    std::cout << " Animal destructor "<< std::endl;
}

Animal::Animal(const Animal& obj)
{
    operator=(obj);
}

Animal Animal::operator=(const Animal& obj)
{
    _type = obj._type;
    return *this;
}

void Animal::setType(std::string type)
{
    _type = type;
}

std::string Animal::getType()
{
    return _type;
}

void Animal::makeSound()
{
    std::cout << " make sound"<< std::endl;
}
