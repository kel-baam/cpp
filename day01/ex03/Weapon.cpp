/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:30 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/11 16:20:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

 Weapon::Weapon(std::string initType)
 {
    type = initType;
 }
void Weapon::setType(std::string initType)
{
  type=initType;
}

const std::string& Weapon::getType()
{
  return type;
}
