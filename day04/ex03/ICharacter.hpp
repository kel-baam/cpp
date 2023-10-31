/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:24:38 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 12:30:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef ICHARACTER_HPP
// #define ICHARACTER_HPP
#pragma once
#include <iostream>
class AMateria;

class ICharacter
{
    public:
    virtual ~ICharacter();
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
