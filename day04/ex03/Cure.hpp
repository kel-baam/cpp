/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:11:49 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/03 13:02:40 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"


class Cure:public AMateria
{
    public:
        Cure();
        Cure(const std::string & type);
        Cure(const Cure & obj);
        Cure& operator=(const Cure &obj);
        ~Cure();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif
