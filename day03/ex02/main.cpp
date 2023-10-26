/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:02 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 15:50:30 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    FragTrap obj=FragTrap("salma");
    obj.attack("kawtar");
    obj.beRepaired(4);
    obj.takeDamage(50);
    obj.takeDamage(60);
    obj.attack("kawtar");
    obj.highFivesGuys();
}