/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:41:50 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:46:04 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << " WrongCat Default constructor" << std::endl;
}

WrongCat::WrongCat(const std::string& type)
{
    _type = type;
    std::cout << " WrongCat parametrize constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    operator=(obj);
}

WrongCat WrongCat::operator=(const WrongCat&obj)
{
    Animal::operator=(obj);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << " WrongCat destructor "<< std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << " WrongCat sound Meaoooooooooooo"<< std::endl;
}