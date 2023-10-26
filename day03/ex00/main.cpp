/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 14:24:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
    ClapTrap obj1=ClapTrap("kawtar");
    ClapTrap obj2 = ClapTrap("salma");
    
    obj1.attack("salma");
    obj2.attack("kawtar");
    
    obj1.takeDamage(2);
    obj2.attack("salma");
    obj1.takeDamage(9);
    obj2.takeDamage(5);
    obj2.takeDamage(5);
    obj2.beRepaired(2);

}