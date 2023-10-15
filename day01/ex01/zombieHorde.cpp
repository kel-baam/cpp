/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:37:51 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/14 10:33:04 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
   
    if(N <= 0)
    {
        std::cout << "PLEASE ENTER A POSITIVE NUMBER"<< std::endl;
        exit(1);
    }
    
    zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
       zombies[i].setName(name);
    return zombies;
}
