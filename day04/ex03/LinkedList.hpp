/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:17 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/03 15:32:15 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LINKDELIST_HPP
#define LINKDELIST_HPP
 #include "AMateria.hpp"
 
struct  Node
{
    AMateria *materia;
    Node  *next;
    Node(AMateria *obj)
        {
            materia = obj;
            next = NULL;
        }
};

struct LinkedList
{
    private:
        Node *head;
    public:;
        LinkedList();
        LinkedList(const LinkedList& obj);
        LinkedList& operator=(const LinkedList& obj);
        ~LinkedList();
        AMateria *getMateria();
        void Push(AMateria *materia);
};


#endif