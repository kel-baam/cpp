/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 11:20:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
    ClapTrap obj1=ClapTrap("SuperHero");
    ClapTrap obj2 = ClapTrap("Monster");
    
    obj1.attack("Monster");
    obj2.attack("SuperHero");
    obj1.takeDamage(2);
    obj2.attack("SuperHero");
    obj1.takeDamage(9);
    obj2.takeDamage(5);
    obj2.takeDamage(5);
    obj2.beRepaired(2);

}