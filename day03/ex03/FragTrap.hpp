/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:13 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();
        void highFivesGuys(void); //This member function displays a positive high fives request on the standard output.
};

#endif