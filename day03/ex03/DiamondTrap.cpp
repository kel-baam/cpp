/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 19:57:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called "<< std::endl;
    setInfo(100,50,30);
}

DiamondTrap::DiamondTrap(std::string name)
{
    setInfo(100,50,30);
}


DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    operator=(obj);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& obj)
{
    // i will copy the fragtrap or the scav trap
    _name = obj._name;
}

void DiamondTrap::attack()
{
    Scavtrap::attack();
    
}

void whoAmI()
{
    std::cout << "DiamondTrap name's " << _name <<  "ClapTrap name's "<< getNa << std::endl;
}
