/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:01:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 17:16:58 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "LinkedList.hpp"

Character::Character()
{
    _name ="";
    for(int i =0; i <4; i++)
        slots[i] = NULL;
    list = new LinkedList();
}

Character::Character(std::string name)
{
    _name = name;
    for(int i =0; i <4; i++)
        slots[i] = NULL;
    list = new LinkedList();
}

Character::~Character()
{
    for(int i =0; i <4; i++)
    {
        if(slots[i])
            delete(slots[i]);
    }
    delete list;
}

Character::Character(const Character& obj)
{
    _name = obj._name;
    for(int i = 0; i < 4; i++)
    {
        if(obj.slots[i])
        {
            slots[i] = slots[i]->clone();
            *slots[i] = *obj.slots[i];
        }
    }
    _name = obj._name;
}

Character&  Character::operator=(const Character& obj)
{
   
    _name = obj._name;
    for(int i =0; i <4; i++)
    {
        if(slots[i])
            delete(slots[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        if(obj.slots[i])
        {
            slots[i] = slots[i]->clone();
            *slots[i] = *obj.slots[i];
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
    int i;
    for(i =0; i < 4;i++)
    {
        if(slots[i] == NULL)
        {
            slots[i] = m;
            break;
        }
    }
    if(i >=4)
        list->Push(m);
}

void  Character::unequip(int idx)
{
  for(int i =0 ; i <4; i++)
  {
    if(i == idx)
    {
        list->Push(slots[i]);
        slots[i] = NULL;
        break;
    }
  }
}

void  Character::use(int idx, ICharacter& target)
{
    if(slots[idx])
        slots[idx]->use(target);
}

