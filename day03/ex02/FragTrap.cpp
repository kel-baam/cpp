/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:06 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 15:50:14 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
 {
    std::cout << "  FragTrap default constructor "<< std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage= 30;
    _maxPoints = 100;
 }

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "  FragTrap parametrize constructor "<< std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage= 30;
    _maxPoints = 100;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    operator=(obj);
}

FragTrap &FragTrap::operator=(const FragTrap &otherObj)
{
    _name     = otherObj._name;
    _hitPoints =otherObj._hitPoints;
    _energyPoints =otherObj._energyPoints;
    _attackDamage= otherObj._attackDamage;
    _maxPoints = otherObj._maxPoints;
     return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "  FragTrap destructor "<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << ClapTrap::_name << " high fives " << std::endl;
}