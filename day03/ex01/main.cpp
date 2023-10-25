/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:50:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/25 10:52:35 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap obj = ScavTrap("kawtar");
    std::string st ="salma";
    obj.attack(st);
    obj.takeDamage(100);
    obj.takeDamage(1);

   // obj.beRepaired(5);
    obj.attack(st);
    
}