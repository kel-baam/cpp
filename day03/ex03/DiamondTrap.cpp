/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/25 19:32:05 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called "<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    ClapTrap(name+"_clap_name");
    _name = name;
    // _hitPoints = FragTrap::_hitPoints;
//   _hitPoints = FragTrap::_hitPoints;
}


DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
   DiamondTrap::operator=(obj);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& obj)
{
    _name = obj._name;
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
std::string DiamondTrap::getName()
{
    return _name;
}


void DiamondTrap::whoAmI()
{
   // std::cout << DiamondTrap::getName() << "DiamondTrap name's " << FragTrap::getName2() <<  "ClapTrap name's "<< std::endl;
}
