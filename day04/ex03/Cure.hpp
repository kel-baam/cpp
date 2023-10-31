/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:11:49 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 09:58:08 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
 #include "AMateria.hpp"
// #include "ICharacter.hpp"

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
