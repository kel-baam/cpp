/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:30 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:32 by kel-baam         ###   ########.fr       */
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
//why &
const std::string& Weapon::getType()
{
  return type;
}
