/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:02:47 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/01 16:30:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
    std::cout<< "Animal Default constructor "<< std::endl;
}

Animal::Animal(const std::string& initType)
{
    type =initType;
}

Animal::~Animal()
{
    std::cout << "Animal destructor "<< std::endl;
}

Animal::Animal(const Animal& obj)
{
    operator=(obj);
}

Animal& Animal::operator=(const Animal& obj)
{
    type = obj.type;
    return *this;
}

const std::string& Animal::getType()const
{
    return type;
}

void Animal::makeSound()const
{
    std::cout << "Animal makes sound"<< std::endl;
}
