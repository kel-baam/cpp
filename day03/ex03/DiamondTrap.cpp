/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 12:12:09 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap()
{
    ClapTrap::_name ="Default_clap_name";
    DiamondTrap::_name = "Default";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _maxPoints = FragTrap::_hitPoints;
    std::cout << "DiamondTrap Default constructor called "<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
    ClapTrap::_name = name + "_clap_name";
    DiamondTrap::_name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    _maxPoints = FragTrap::_hitPoints;
    std::cout << "DiamondTrap constructor called "<< std::endl;
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

void DiamondTrap::attack(const std::string& target)
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
