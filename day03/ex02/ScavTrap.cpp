/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/21 11:50:42 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"




ScavTrap::ScavTrap()
{
    std::cout << " ScavTrap Default constructor called "<< std::endl;
}; 

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    
    std::cout << " ScavTrap constructor called "<< std::endl;
    setInfo(100,50,20);
}

// ScavTrap::ScavTrap(const ScavTrap& otherObj)
// {
//     operator=(otherObj);
// }

//     operator=(otherObj);
//     ScavTrap& ScavTrap::operator=(const ScavTrap& otherObj)
// {
// ///
// }

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called "<< std::endl;
    
} 

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string& target)
{
    ClapTrap::attack(target);
}