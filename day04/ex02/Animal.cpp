/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:02:47 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/29 14:59:44 by kel-baam         ###   ########.fr       */
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


void Animal::setType(const std::string& type)
{
    _type = type;
}

const std::string& Animal::getType()const
{
    return _type;
}
