/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:11:41 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/05 17:11:44 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//free
int main()
{
    Zombie zombie;
    zombie.setName("kawtar");
    zombie.announce();
    std::cout<<"---------------------------------------------"<<std::endl;
    Zombie zombie1;
    zombie.randomChump("lllll");
}
