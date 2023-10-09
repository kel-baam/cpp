/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:37:51 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 18:41:34 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// i should revese him wach hwa hadak ola la
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    int i;
    i = 0;
    zombies = new Zombie[N];
    while(i < N)
    {
       zombies[i].setName(name);
        i++;
    }
    return zombies;
}
// main to test andd delete leaks
