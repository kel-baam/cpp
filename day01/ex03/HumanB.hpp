/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:23 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/06 15:49:14 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB( std::string nm);
        void attack();
        void setWeapon(Weapon &initWeapon);
};
