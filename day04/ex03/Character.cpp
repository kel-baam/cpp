/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:01:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 15:21:50 by kel-baam         ###   ########.fr       */
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
    LinkedList *tmp;
    for(int i =0; i <4; i++)
    {
        if(slots[i])
        delete(slots[i]);
    }
    while(list)
    {
        std::cout << list << std::endl;
        tmp = list;
        list = list->getNext();
        delete(tmp);
    }
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
        list->ft_push(&list,list->NewNode(m));
}

void  Character::unequip(int idx)
{
  for(int i =0 ; i <4; i++)
  {
    if(i == idx)
    {
        list->ft_push(&list,list->NewNode(slots[i]));
        slots[i] = NULL;
        break;
    }
  }
}

void  Character::use(int idx, ICharacter& target)
{
    slots[idx]->use(target);
}

