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
using namespace std;

class PhoneBook
{
    private:
     Contact contacts[9];
     int index;
     int totalC;
    public:
        PhoneBook(){
            cout << " Constructor!!!!!!"<< endl;
        };
        ~PhoneBook(){
            cout << " Deconstructor!!!!!!!"<< endl;
        };
        void setIndex(int initItndex);
        int getIndex();
        void setTotalC(int iniT);
        int getTotalC();
        void addContact();
        void searchContact();
        void contactsList();
        void handelSpaces(string str);
        int exit_f();
};
 
