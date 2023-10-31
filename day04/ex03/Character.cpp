/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:01:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 17:26:52 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character()
{
    for(int i =0; i <4; i++)
        slots[i] = NULL;
}

Character::Character(std::string name)
{
    _name = name;
    for(int i =0; i <4; i++)
        slots[i] = NULL;
}
Character::~Character()
{
    
}
Character::Character(const Character& obj)
{
    //  this->slots[4]
    _name = obj._name;
    for(int i = 0; i < 4; i++)
    {
        if(obj.slots[i])
        {
         if(obj.slots[i]->getType() == "Cure")
         {
            slots[i] = new Cure();
            *slots[i] = *obj.slots[i];
         }
         else if (obj.slots[i]->getType() == "Ice")
            {
                slots[i] = new Ice();
                *slots[i] = *obj.slots[i];
            }
        }
    }
    _name = obj._name;
    
}
Character&  Character::operator=(const Character& obj)
{
    //delete for leak
    // delete[] slots[4];
    _name = obj._name;
        for(int i = 0; i < 4; i++)
    {
        if(obj.slots[i])
        {
         if(obj.slots[i]->getType() == "Cure")
         {
            slots[i] = new Cure();
            *slots[i] = *obj.slots[i];
         }
         else if (obj.slots[i]->getType() == "Ice")
            {
                slots[i] = new Ice();
                *slots[i] = *obj.slots[i];
            }
        }
    }
    return *this;
}

std::string const &  Character::getName() const
{
    return _name;
}

void  Character::equip(AMateria* m)
 {
    for(int i =0; i < 4;i++)
        {
            if(slots[i] == NULL)
            {
                slots[i] = m;
                printf("%dheeeere\n",i);
                break;
            }
        }
        //They equip the Materias in the first empty slot they find
}

void  Character::unequip(int idx)
{
  (void)idx;
}

void  Character::use(int idx, ICharacter& target)
{
    slots[idx]->use(target);
}
