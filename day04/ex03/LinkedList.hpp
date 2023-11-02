/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:17 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 14:09:13 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LINKDELIST_HPP
#define LINKDELIST_HPP
 #include "AMateria.hpp"
 
class LinkedList
{
    private:
        AMateria *materia;
        LinkedList  *next;
    public:;
        LinkedList();
        LinkedList(const LinkedList& obj);
        LinkedList operator=(const LinkedList& obj);
        ~ LinkedList();
        LinkedList *getNext();
        void ft_push(LinkedList **list,LinkedList  *materia);
        LinkedList *LastNode( LinkedList *list);
        LinkedList *NewNode (AMateria *content); 
       int size_list(LinkedList *materia);
};

#endif