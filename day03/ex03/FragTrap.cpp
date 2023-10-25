/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:06 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/25 11:48:34 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
 {
    std::cout << "  FragTrap default constructor "<< std::endl;
    ClapTrap::_hitPoints = 100;
    ClapTrap::_energyPoints = 100;
    ClapTrap::_attackDamage= 30;
    ClapTrap::_maxPoints = 100;
 }


FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "  FragTrap parametrize constructor "<< std::endl;
    ClapTrap::_hitPoints = 100;
    ClapTrap::_energyPoints = 100;
    ClapTrap::_attackDamage= 30;
    ClapTrap::_maxPoints = 100;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    operator=(obj);
}

FragTrap &FragTrap::operator=(const FragTrap &otherObj)
{
    ClapTrap::_hitPoints =otherObj._hitPoints;
    ClapTrap::_energyPoints =otherObj._energyPoints;
    ClapTrap::_attackDamage= otherObj._attackDamage;
    ClapTrap::_maxPoints = otherObj._maxPoints;
     return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "  FragTrap destructor "<< std::endl;
}

void FragTrap::highFivesGuys(void)//This member function displays a positive high fives request on the standard output.
{
    std::cout <<ClapTrap::_name<< " high fives "<< std::endl;
}