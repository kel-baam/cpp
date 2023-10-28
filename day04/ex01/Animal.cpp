/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:02:47 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 11:01:08 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("Animal")
{
    std::cout<< "Animal Default constructor "<< std::endl;
}

Animal::Animal(const std::string& type)
{
    _type =type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor "<< std::endl;
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

void Animal::setType(const std::string& type)
{
    _type = type;
}

const std::string& Animal::getType()const
{
    return _type;
}

void Animal::makeSound()const
{
    std::cout << "make sound"<< std::endl;
}
