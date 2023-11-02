/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:14 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 14:44:16 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList(){}

LinkedList::~LinkedList(){}

LinkedList::LinkedList(const LinkedList& obj)
{
    materia = obj.materia->clone();
    next = new LinkedList();
    *next = *(obj.next);
}

LinkedList LinkedList::operator=(const LinkedList& obj)
{
    
    delete this->materia;
    delete this->next;
    materia = obj.materia->clone();
    next = new LinkedList(*obj.next);
    return *this;
}

void LinkedList::ft_push(LinkedList **list,LinkedList  *materia)
{
    LinkedList *lastNode;
    
    if(list)
    {
        if(!*list)
            *list = materia;
        else
        {
            lastNode = LastNode(*list);
            lastNode->next = materia;
        }
    }
}

LinkedList* LinkedList::LastNode( LinkedList *list)
{
    if(!list)
        return NULL;
    while(list->next)
    {
        list =list->next;
    }
    return list;
}

LinkedList* LinkedList::NewNode(AMateria *content)
{
    LinkedList *node;
    node = new LinkedList();
    node->materia = content;
    node->next = NULL;
    return node;
}

int LinkedList::size_list(LinkedList *materia)
{
    int len;
            
    len = 0;
    while (materia)
    {
        len++;
        materia = materia->next;
    }
    return len;
}

LinkedList *LinkedList::getNext()
{
    return this->next;           
}