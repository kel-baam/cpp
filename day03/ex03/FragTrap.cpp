/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:06 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/23 13:11:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
 {
    std::cout << "  FragTrap default constructor "<< std::endl;
    setInfo(100,100,30);
 }


FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "  FragTrap parametrize constructor "<< std::endl;
    setInfo(100,100,30);
}

FragTrap::FragTrapp(const FragTrap &obj)
{
    operator=(obj);
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
     ClapTrap::operator=(obj);
}

FragTrap::~FragTrap()
{
    std::cout << "  FragTrap destructor "<< std::endl;
}