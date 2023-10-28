/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 18:33:30 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    _type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(const std::string& type)
{
    _type = type;
    brain = new Brain();
    std::cout << "Cat parametrize constructor" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    
   std::cout << "heeelo"<< std::endl;
    delete(brain);
    brain = new Brain(*obj.brain);
    std::cout << brain <<  "  " << obj.brain<< std::endl;
}

Cat Cat::operator=(const Cat&obj)
{
    std::cout << "llll" << std::endl;
    Animal::operator=(obj);
    delete(brain);
    brain = new Brain(*obj.brain);
    return *this;
}

Cat::~Cat()
{
    delete(brain);
    std::cout << "Cat destructor "<< std::endl;
}


void Cat::makeSound()const
{
    std::cout << "Cat sound Meaoooooooooooo"<< std::endl;
}