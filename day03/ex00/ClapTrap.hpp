/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:29 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/26 14:51:53 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int  _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        unsigned int _maxPoints;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap& obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif