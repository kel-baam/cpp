/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:23 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:24 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string nm)
        {
            name = nm;
        };
        void attack();
        void setWeapon(Weapon &initWeapon);
    private:
        Weapon *weapon;
        std::string name;
};
