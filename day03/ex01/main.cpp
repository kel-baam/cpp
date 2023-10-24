/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:50:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 15:42:55 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap obj = ScavTrap("kawtar");
    std::string st ="kolp";
    obj.attack(st);
    obj.takeDamage(17);
    obj.beRepaired(5);
    obj.attack(st);

    
    
}