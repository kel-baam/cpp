/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:11:56 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 14:34:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
  #include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& type);
        AMateria&operator=(const AMateria& obj);
        virtual ~AMateria();
        
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif