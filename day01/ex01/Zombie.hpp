/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:17:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/07 11:18:00 by kel-baam         ###   ########.fr       */
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
        static Zombie* zombieHorde( int N, std::string name );
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );
