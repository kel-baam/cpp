/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:37:51 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/07 11:37:53 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    int i;
    i = 0;
    zombies = new Zombie[N];
    while(i <N)
    {
       zombies[i].setName(name);
        i++;
    }
    return zombies;
}
