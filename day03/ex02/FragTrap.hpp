/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.HPP                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/21 13:07:14 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        //copy && operator=
        ~FragTrap();
        void highFivesGuys(void); //This member function displays a positive high fives request on the standard output.
}

#endif