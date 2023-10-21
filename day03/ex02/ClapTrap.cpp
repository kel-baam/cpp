/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:39 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/21 10:18:01 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"





#include "ClapTrap.hpp"





ClapTrap::ClapTrap():_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called "<< std::endl;
}

ClapTrap::ClapTrap(std::string name):_hitPoints(10),_energyPoints(10),_attackDamage(0)
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
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called "<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
        if(_hitPoints > 0 && _energyPoints > 0)
        {
            std::cout << "ClapTrap "<<  _name <<" attacks " << target<< " , causing " << _attackDamage << " points of damage"<< std::endl;
            _energyPoints--;
        }
        else
            std::cout << "PLEASE CHECK UR ENERGY AND UR HIT POINTS" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " takes damage " << amount << std::endl;
    _attackDamage+=amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << _name << " repaired amount of "<< amount<< std::endl;
        _hitPoints+= amount;
        _energyPoints--;
    }
    else
        std::cout << "PLEASE CHECK UR ENERGY AND UR HIT POINTS" << std::endl;
}

void ClapTrap::setInfo(int hitPoints, int energyPoints, int attackDamage)
{
    _hitPoints = hitPoints;
    _energyPoints = energyPoints;
    _attackDamage = attackDamage;
}
