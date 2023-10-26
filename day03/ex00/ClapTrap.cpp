/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:25 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 15:47:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap():_name(""),_hitPoints(10),_energyPoints(10),_attackDamage(0),_maxPoints(10)
{
    std::cout <<" ClapTrap Default constructor called "<< std::endl;
}

ClapTrap::ClapTrap(std::string name):_hitPoints(10),_energyPoints(10),_attackDamage(0),_maxPoints(10)
{
    std::cout << "ClapTrap constructor paramitrize called "<< std::endl;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    operator=(obj);
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
    _name = obj._name;
    _hitPoints = obj._hitPoints;
    _energyPoints = obj._energyPoints;
    _attackDamage = obj._attackDamage;
    _maxPoints   = obj._maxPoints;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap Destructor called "<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
        if(_hitPoints > 0 && _energyPoints > 0)
        {
            std::cout << "ClapTrap "<<  _name <<" attacks " << target<< " , causing " << _attackDamage << " points of damage"<< std::endl;
            _energyPoints--;
        }
        else
            std::cout << _name << " there is no more energie or hit points " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= amount)
    {
        _hitPoints= 0;
        std::cout << _name << " is died"<< std::endl;
        return;
    }
    else
        _hitPoints -= amount;
    std::cout << _name << " takes damage " << amount  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << _name << " repaired amount of "<< amount<< std::endl; 
        if(_hitPoints + amount < _maxPoints)
            _hitPoints+= amount;
        else
            _hitPoints = _maxPoints;
        _energyPoints--;
    }
    else
        std::cout << _name << " there is no more energie or hit points " << std::endl;
}

