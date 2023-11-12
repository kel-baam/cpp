/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:13 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 15:28:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(const std::string& initType)
{
    type = initType;
    brain = new Brain();
    std::cout << "Dog parametrize constructor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
   Animal::operator=(obj);
   brain = new Brain(*obj.brain);
}

Dog Dog::operator=(const Dog&obj)
{
    Animal::operator=(obj);
    delete(brain);
    brain = new Brain(*obj.brain);
    return *this;
}

Dog::~Dog()
{
    delete(brain);
    std::cout << "Dog destructor "<< std::endl;
    
}

void Dog::makeSound()const
{
    std::cout << "Dog sound haoooooooo"<< std::endl;
}