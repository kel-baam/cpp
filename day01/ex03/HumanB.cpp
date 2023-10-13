/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:16 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/11 15:19:51 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string nm)
{
    name = nm;
};
void HumanB::attack()
{
    if(weapon)
    {
         std::cout<< name << " attacks with their "<< (weapon->getType())<< std::endl;
    }
    else
        std::cout << "YOU NEED TO INITIALIZE OBJECT WEAPON"<< std::endl;
        
}
void HumanB::setWeapon(Weapon &initWeapon)
{
    
    weapon = &initWeapon;
}
