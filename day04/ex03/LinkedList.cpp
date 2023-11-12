/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:14 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/03 15:32:15 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    this->head = NULL;
}

LinkedList::~LinkedList()
{
    Node *tmp;
    while(head)
    {
        tmp = head;
        head = head->next;
        delete(tmp->materia);
        delete(tmp);
    }
}

LinkedList::LinkedList(const LinkedList& obj)
{
    (void)obj;
}

LinkedList& LinkedList::operator=(const LinkedList& obj)
{
    (void)obj;
    return *this;
}

void LinkedList::Push(AMateria *materia)
{
    Node *newNode;
    
    newNode = new Node(materia);
    if(head)
        newNode->next = head;
    head = newNode;
}


AMateria *LinkedList::getMateria()
{
    AMateria *tmp;
    tmp = head->materia->clone();
    
    return tmp;
}
