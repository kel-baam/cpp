/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 12:26:05 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << " ScavTrap Default constructor called "<< std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage =20;
    _maxPoints = 100;
}; 

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    
    std::cout << " ScavTrap constructor called "<< std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage =20;
    _maxPoints = 100;
}
ScavTrap::ScavTrap(const ScavTrap& otherObj)
{
    operator=(otherObj);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& otherObj)
{
    _hitPoints =otherObj._hitPoints;
    _energyPoints =otherObj._energyPoints;
    _attackDamage= otherObj._attackDamage;
    _maxPoints = otherObj._maxPoints;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called "<< std::endl;
} 

void ScavTrap::guardGate()
{
    std::cout << ClapTrap:: _name <<"ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string& target)
{
     if(_hitPoints > 0 && _energyPoints > 0)
        {
            std::cout << "ScavTrap "<<  ClapTrap::_name <<" attacks " << target<< " , causing " << ClapTrap::_attackDamage << " points of damage"<< std::endl;
            ClapTrap::_energyPoints--;
        }
        else
            std::cout << "PLEASE CHECK UR ENERGY AND UR HIT POINTS" << std::endl;
}
