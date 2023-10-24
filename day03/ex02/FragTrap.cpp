/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:06 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 19:39:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
 {
    std::cout << "  FragTrap default constructor "<< std::endl;
    setInfo(100,100,30);
 }


FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "  FragTrap parametrize constructor "<< std::endl;
    setInfo(100,100,30);
}

FragTrap::FragTrap(const FragTrap &obj)
{
    operator=(obj);
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
     ClapTrap::operator=(obj);
     return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "  FragTrap destructor "<< std::endl;
}

void FragTrap::highFivesGuys(void)//This member function displays a positive high fives request on the standard output.
{
    std::cout << " high fives "<< std::endl;
}