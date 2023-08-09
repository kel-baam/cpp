/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:16 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{

        std::cout<< name << " attacks with their "<< (weapon->getType())<< std::endl;
    //else
        //std::cout<< name<< "has no weapon"<<std::endl;
}
void HumanB::setWeapon(Weapon &initWeapon)
{
    weapon=&initWeapon;
}
