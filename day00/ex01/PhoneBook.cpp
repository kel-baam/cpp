/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:45 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/29 16:43:47 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int PhoneBook::exit_f()
{
    return 0;

}

void  PhoneBook::setIndex(int initItndex)
{
    this->index = initItndex;
}

int PhoneBook::getIndex()
{
    return this->index;
}
void  PhoneBook::setTotalC(int iniTC)
{
    totalC= iniTC;
}

int PhoneBook::getTotalC()
{
    return totalC;;
}
void PhoneBook::handelSpaces(string str)
{
    int len = str.length();

    int diff = 10 - len;
    if(len <= 10)
    {
        while(diff)
        {
            cout <<" ";
            diff--;
        }
        cout << str;
    }
 // i didn't understand second condition
}
void PhoneBook::addContact()
{
    string firstName;
    string  lastN;
    string nickN;
    string  darkestS;
    int phoneN;

    //namE
    cout << "Please enter your first name :"<<endl;
    cin >> firstName;
    contacts[getIndex() % 8].setFirstN(firstName);
    //last name
    cout << "Please enter your last name      :"<<endl;
    cin >> lastN;
    contacts[getIndex() % 8 ].setLastN(lastN);
    //nickname
    cout << "Please enter your nick name      :"<<endl;
    cin >> nickN;
    contacts[getIndex() % 8 ].setnickN(nickN); 
    //nunm
    cout <<"Please enter your number phone   :"<<endl; 
    cin >> phoneN;
    contacts[getIndex() % 8 ].setPhoneN(phoneN);
    //darkest
    cout << "Please enter your darkest secret :"<<endl;
    cin >> darkestS;
   contacts[getIndex() % 8 ].setDarkestS(darkestS);
     if(getIndex() <= 8)
       setTotalC(getTotalC() + 1);
       //GETINDEX WHENE IT TURN 8 MAYBE I SHOULD INIT TO 0
    setIndex(getIndex() + 1);
}


void PhoneBook::contactsList()
{
    int i;
    i = 0;
    cout << "  index  |first name|last name | nickname " <<endl;
    for(i = 0; i < getTotalC(); i++)
    {
        cout <<"         ";
        cout << i << "|" ;
        handelSpaces(contacts[i].getFirstN());
        cout << "|";
        handelSpaces(contacts[i].getLastN());
        cout << "|";
        handelSpaces(contacts[i].getnickN()) ;
        cout << endl;
    }
}

void PhoneBook::searchContact()
{
    int i;

    contactsList();
    cout  << "Please enter index of the choosing contact : "<< endl;
    cin >> i;
    if(i > 8)
        cout << " this index in out of range !!!!"<<endl;
    else
    {
        cout << " First name     : " << contacts[i].getFirstN() << endl;
        cout << " Last name      : " << contacts[i].getLastN() << endl;
        cout << " nick name      : " << contacts[i].getnickN() << endl;
        cout << " phone number   : " << contacts[i].getPhoneN() << endl;
        cout << " Darkest secret : " << contacts[i].getDarkestS() << endl;

    }
}
