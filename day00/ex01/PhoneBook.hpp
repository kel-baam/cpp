/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:21 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/05 19:09:26 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
     Contact contacts[9];
     int index;
     int totalC;
    public:
        PhoneBook():index(0),totalC(0){};
        ~PhoneBook(){};
        void setIndex(int initItndex);
        int getIndex();
        void setTotalC(int iniT);
        int getTotalC();
        void addContact();
        void searchContact();
        std::string contactsList();
        void displayList(std::string str);
        int exit_f();
        std::string ft_getline();
};
 
