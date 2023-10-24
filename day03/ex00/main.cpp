/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/24 14:24:50 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
    ClapTrap obj=ClapTrap("kawtar");

    obj.attack("salma");
    obj.attack("salma");
    

    obj.takeDamage(-1);
    obj.attack("salma");
    obj.takeDamage(10);

}