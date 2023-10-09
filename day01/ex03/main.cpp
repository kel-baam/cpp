/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:46 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:48 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
//set dosn't work
//i should revese the exercice  agin 
int main()
{
    {
       Weapon club = Weapon("crude spiked club");
       HumanA bob("Bob", club);
       bob.attack();
       club.setType("some other type of club");
       club.getType();
       bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}
