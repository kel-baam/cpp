/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 15:03:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap:public ScavTrap,public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& obj);
        DiamondTrap& operator=(const DiamondTrap& obj);
        void attack(std::string& target);
        ~DiamondTrap();
        void whoAmI();
};





#endif