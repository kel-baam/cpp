/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:02 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 12:08:46 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    FragTrap obj=FragTrap("SuperHero");
    obj.attack("Monster");
    obj.beRepaired(4);
    obj.highFivesGuys();
    obj.takeDamage(50);
    obj.takeDamage(60);
    obj.attack("kawtar");
}