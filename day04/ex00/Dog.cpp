/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:13 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:14:09 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    _type = "Dog";
    std::cout << " Dog Default constructor" << std::endl;
}

Dog::Dog(const std::string& type)
{
    _type = type;
    std::cout << " Dog parametrize constructor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    operator=(obj);
}

Dog Dog::operator=(const Dog&obj)
{
    Animal::operator=(obj);
    return *this;
}

Dog::~Dog()
{
    std::cout << " Dog destructor "<< std::endl;
}

void Dog::makeSound()const
{
    std::cout << " Dog sound haoooooooo"<< std::endl;
}