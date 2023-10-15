/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:24:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/14 10:35:07 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    
    Zombie *zombies = zombieHorde(5, "KAWTAR");
    for(int i = 0; i < 5; i++)
    {
        std::cout << zombies[i].getName()<<std::endl;
        zombies[i].announce();
        std::cout<<"--------------------------------------"<< std::endl;
    }
   delete[] zombies;
}
