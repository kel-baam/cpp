/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 19:55:21 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.cpp"
#include <iostream>
class DiamondTrap:public FragTrap,public ScavTrap
{
    private:
        std::string _name; 
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& obj);
        DiamondTrap& operator=(const DiamondTrap& obj);
        void attack();
        ~DiamondTrap();
        void whoAmI();
};





#endif