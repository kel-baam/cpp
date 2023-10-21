/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:28 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/21 11:50:12 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    
            
    public:
        ScavTrap();
        ScavTrap(std::string name);
       // ScavTrap(std::string name);
       ScavTrap(const ScavTrap& obj);
       void attack(std::string& target);
       ScavTrap& operator=(const ScavTrap& obj);
        ~ScavTrap();
        void guardGate();
        
};
#endif