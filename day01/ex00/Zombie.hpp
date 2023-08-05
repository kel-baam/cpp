/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:24:05 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/05 15:24:09 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Zombie
{
    public:
        Zombie(){};
        ~Zombie(){};
        void setName(std::string initName);
        std::string getName();
        void announce( void );
        void randomChump( std::string name );;
    private:
        std::string name;
};
