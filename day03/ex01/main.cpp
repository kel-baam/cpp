/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:50:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 14:39:26 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap obj = ScavTrap("kawtar");
    std::string st ="salma";
    obj.attack(st);
    obj.takeDamage(50);
    obj.takeDamage(20);
    obj.takeDamage(200);
    obj.attack(st);
    
}