/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:09 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:42:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

class HumanA
{
    public: 
        HumanA(std::string initName,Weapon &wea):weapon(wea),name(initName)
        {
        };
        
        void attack();
    private:
        Weapon &weapon;
        std::string name;
};
