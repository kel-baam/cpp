/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:17:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/12 13:57:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        void setName(std::string initName);
        std::string getName();
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif