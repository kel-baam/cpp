/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:06 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/21 13:32:15 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
 {
    std::cout << "  FragTrap default constructor "<< std::endl;
 }


FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    setInfo(100,100,30);
}

FragTrap::FragTrapp(const ClapTrap &obj)
{
    
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{}
 FragTrap::~FragTrap()
{
    std::cout << "  FragTrap destructor "<< std::endl;
}