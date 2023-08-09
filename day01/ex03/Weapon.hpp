/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:38 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:40 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define  WEAPON_HPP
#include <iostream>

class Weapon
{   
    public:
        Weapon(){};
        Weapon(std::string type);
        void setType(std::string initType);
        const std::string &getType();
    private:
        std::string type;

};
#endif
