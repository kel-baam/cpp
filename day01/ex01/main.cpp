/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:24:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 18:09:51 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int i =0;

    Zombie *zombies = zombieHorde( 5, "hza" );
    i = 0;
    while(i < 4)
    {
        std::cout << zombies[i].getName()<<std::endl;
        i++;
    }
}
