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
void PhoneBook::handelSpaces(std::string str)
{
    int len = str.length();
    int diff=10-len;
    int i;
    if(len <= 10)
    {
        diff = 10 -len;
        while(diff)
        {
            std::cout <<" ";
            diff--;
        }
        std::cout << str;
    }
    else
     {   i = 0;
        while(i<7)
        {
            std::cout<<str[i];
            i++;
        }
        std::cout<<"...";
   }
}

void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastN;
    std::string nickN;
    std::string darkestS;
    std::string phoneN;

    std::cout << "Please enter your first name :"<<std::endl;
    std::cin >> firstName;
    contacts[getIndex() % 8].setFirstN(firstName);

    std::cout << "Please enter your last name      :"<<std::endl;
    std::cin >> lastN;
    contacts[getIndex() % 8 ].setLastN(lastN);
    //nickname
    std::cout << "Please enter your nick name      :"<<std::endl;
    std::cin >> nickN;
    contacts[getIndex() % 8 ].setnickN(nickN); 
    //nunm
    std::cout <<"Please enter your number phone   :"<<std::endl; 
    std::cin >>phoneN;
    contacts[getIndex() % 8 ].setPhoneN(phoneN);
    ///darkest secret
    std::cout << "Please enter your darkest secret :"<<std::endl;
    std::cin >> darkestS;
    contacts[getIndex() % 8 ].setDarkestS(darkestS);
     if(getIndex() <= 8)
       setTotalC(getTotalC() + 1);
    setIndex(getIndex() + 1);
}
// ERROR WHENE I ENTER EXIT WHENE I CHOOSE CONTACT
void PhoneBook::contactsList(int *index)
{
    int i;
    i = 0;
  
    if(getTotalC()>0)
    {  
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "  index  |first name|last name | nickname |"<<std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
        for(i = 0; i < getTotalC(); i++)
        {
            std::cout <<"        ";
            std::cout << i << "|" ;
            handelSpaces(contacts[i].getFirstN());
            std::cout << "|";
            handelSpaces(contacts[i].getLastN());
            std::cout << "|";
            handelSpaces(contacts[i].getnickN()) ;
            std::cout << "|"<<std::endl;
        }
        std::cout << "------------------------------------------"<<std::endl;
        std::cout  << "Please enter index of the choosing contact : "<< std::endl;
        std::cin >> *index;
    }
    else
        std::cout<< "**there is no contact in the list**"<< std::endl;
}

void PhoneBook::searchContact()
{
    int index =-1;

    contactsList(&index);
    if(index > 8)
        std::cout << " this index in out of range !!!!"<<std::endl;
    else if(index>-1 && index<getTotalC())
    {
        std::cout << " First name     : " << contacts[index].getFirstN() << std::endl;
        std::cout << " Last name      : " << contacts[index].getLastN() << std::endl;
        std::cout << " nick name      : " << contacts[index].getnickN() << std::endl;
        std::cout << " phone number   : " << contacts[index].getPhoneN() << std::endl;
        std::cout << " Darkest secret : " << contacts[index].getDarkestS() << std::endl;
    }
    else if (index >0)
        std::cout<<"**there is no contat in this index**"<< std::endl;
}
