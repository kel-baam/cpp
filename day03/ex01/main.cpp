/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:50:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/23 11:48:46 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap obj = ScavTrap("kawtar");
    obj.setName("ppppp");
    ScavTrap obj2 =obj;
    std::cout <<obj2.getName() << std::endl;
    std::string p ="salmaaa";
    obj.attack(p);
    
}