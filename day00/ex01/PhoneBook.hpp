/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:21 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/29 16:43:23 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
     Contact contacts[9];
     int index;
     int totalC;
    public:
        PhoneBook(){};
        ~PhoneBook(){};
        void setIndex(int initItndex);
        int getIndex();
        void setTotalC(int iniT);
        int getTotalC();
        void addContact();
        void searchContact();
        void contactsList(int *index);
        void handelSpaces(std::string str);
        int exit_f();
};
 
