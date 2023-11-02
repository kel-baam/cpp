/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:49 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/01 16:17:00 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
    std::cout<< "WrongAnimal Default constructor "<< std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout<< "WrongAnimal constructor parametrize "<< std::endl;
    _type = type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor "<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    operator=(obj);
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal& obj)
{
    _type = obj._type;
    return *this;
}


const std::string& WrongAnimal::getType()const
{
    return _type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "make sound WrongAnimal "<< std::endl;
}
