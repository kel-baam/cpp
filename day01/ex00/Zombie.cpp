/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:23:50 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 17:51:29 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout<< name << " Was Destroyed !!!!!!"<< std::endl;
}
void  Zombie::setName(std::string initName)
{
    name = initName;
}
std::string Zombie::getName()
{
    return name;
}
void Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
