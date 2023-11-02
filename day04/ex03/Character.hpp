/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:01:49 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 11:24:09 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <deque>
 #include "AMateria.hpp"
// class AMateria;
#include "ICharacter.hpp"
#include "LinkedList.hpp"
class LinkedList;
class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria *slots[4];
        LinkedList *list;
    public:
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character& obj);
        Character& operator=(const Character& obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    };

#endif
