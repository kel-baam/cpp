/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/23 15:32:44 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << " Cat Default constructor" << std::endl;
}
//check this 
Cat::Cat(std::string type):Animal(type)
{
    std::cout << " Cat parametrize constructor" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    operator=(obj);
}

Cat Cat::operator=(const Cat&obj)
{
    Animal::operator=(obj);
    return *this;
}

Cat::~Cat()
{
    std::cout << " Cat destructor "<< std::endl;
}


void Cat::makeSound()
{
    std::cout << " Cat sound Meaoooooooooooo"<< std::endl;
}