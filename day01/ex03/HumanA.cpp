/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:41:57 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/11 15:22:23 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string initName,Weapon &wea):weapon(wea),name(initName){};

void HumanA::attack()
{
    std::cout<< name << " attacks with their "<< weapon.getType()<< std::endl;
}

