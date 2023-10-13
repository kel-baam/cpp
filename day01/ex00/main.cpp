/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:11:41 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/11 15:30:26 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    (void)*av;
    
    if(ac == 1)
    {
        Zombie *zombie;
        
        zombie = newZombie("Kawtar");
        zombie->announce();
        delete(zombie);
        std::cout << "---------------------------------------------"<< std::endl;
        randomChump("salma");
        std::cout << "---------------------------------------------"<< std::endl;  
    }
    else
        std::cout << "PLEASE WHITOUT ANY ARGUMENT"<< std::endl;
}
