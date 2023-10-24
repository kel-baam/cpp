/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:39 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 19:34:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"




ClapTrap::ClapTrap():_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
    std::cout << " Default constructor called "<< std::endl;
}

ClapTrap::ClapTrap(std::string name):_hitPoints(10),_energyPoints(10),_attackDamage(0)
{

    std::cout << "constructor paramitrize called "<< std::endl;
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
    std::cout << "Destructor called "<< std::endl;
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
    if(_hitPoints <= amount)
        _hitPoints= 0;
    else
        _hitPoints -= amount;
    std::cout << _name << " takes damage " << _attackDamage << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << _name << " repaired amount of "<< amount<< std::endl;
        if(_hitPoints + amount< 10)
            _hitPoints+= amount;
        else
            _hitPoints = 10;
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
