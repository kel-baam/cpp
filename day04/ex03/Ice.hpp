/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:18:50 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/03 13:02:50 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Ice:public AMateria
{
    public:
        Ice();
        Ice(const std::string & type);
        Ice(const Ice& obj);
        Ice& operator=(const Ice &obj);
        ~Ice();
        
        AMateria* clone() const;
        void use(ICharacter& target);
        
};


#endif
