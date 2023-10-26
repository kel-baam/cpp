/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 16:03:10 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap():ScavTrap(),FragTrap()
{
    _name = "";
     _hitPoints = _hitPoints;
    
    _energyPoints = _energyPoints;
    _attackDamage = _attackDamage;
    _maxPoints = _hitPoints;
    std::cout << "DiamondTrap Default constructor called "<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),ScavTrap(name),FragTrap(name)
{
    _name = name;
    
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _maxPoints = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
   DiamondTrap::operator=(obj);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& otherObj)
{
    _name     = otherObj._name;
    _hitPoints =otherObj._hitPoints;
    _energyPoints =otherObj._energyPoints;
    _attackDamage= otherObj._attackDamage;
    _maxPoints = otherObj._maxPoints;
    return *this;
}

void DiamondTrap::attack(std::string& target)
{
   ScavTrap::attack(target);
    
}

DiamondTrap::~DiamondTrap()
{
    std::cout << " DiamondTrap destructor "<< std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << _name << " DiamondTrap name's " << ClapTrap::_name <<  " ClapTrap name's "<< std::endl;
}
