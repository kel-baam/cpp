/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:17:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/06 15:47:40 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        void setName(std::string initName);
        std::string getName();
        void announce( void );
        //static Zombie* zombieHorde( int N, std::string name);
};
