/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:50:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 11:37:37 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap obj = ScavTrap("SuperHero");
    obj.attack("Monster");
    obj.takeDamage(50);
    obj.takeDamage(20);
    obj.takeDamage(200);
    obj.attack("Monster");
}