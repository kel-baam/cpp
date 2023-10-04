/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:45 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/04 14:48:15 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::exit_f()
{
    return (0);
}

void  PhoneBook::setIndex(int initItndex)
{
    this->index = initItndex;
}

int PhoneBook::getIndex()
{
    return (this->index);
}

void  PhoneBook::setTotalC(int iniTC)
{
    totalC = iniTC;
}

int PhoneBook::getTotalC()
{
    return (totalC);
}
void PhoneBook::displayList(std::string str)
{
    int len;
    std::string tmp_str;
    
    len = str.length();
    tmp_str = str;
    if (len < 10)
    {
        std::cout << std::setw(10);
        std::cout << str;
    }
    else
    {
        tmp_str.resize(9);
        std::cout << tmp_str << ".";
    }
}

int is_valid(std::string str)
{
    std::string::size_type i = 0;
    
    while(i < str.size())
    {
        if(!isdigit(str.at(i)))
            return 1;
        i++;
    }
    return 0;
}
void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastN;
    std::string nickN;
    std::string darkestS;
    std::string phoneN;

    std::cout << "Please enter your first name :"<<std::endl;
    getline(std::cin, firstName);
    //if(!std::cin)
    contacts[getIndex() % 8].setFirstN(firstName);
    std::cout << "Please enter your last name      :"<<std::endl;
    getline(std::cin, lastN);
    if(!std::cin)
        std::cout<<"heere\n";
    contacts[getIndex() % 8 ].setLastN(lastN);
    std::cout << "Please enter your nick name      :"<<std::endl;
    getline(std::cin, nickN);
    contacts[getIndex() % 8 ].setnickN(nickN); 
    std::cout <<"Please enter your number phone   :"<<std::endl; 
    getline(std::cin, phoneN);
    while ((is_valid(phoneN)))
    {
        std::cout <<"Please enter your number phone   :"<<std::endl; 
        getline(std::cin, phoneN);
    }
    contacts[getIndex() % 8 ].setPhoneN(phoneN);
    std::cout << "Please enter your darkest secret :"<<std::endl;
        getline(std::cin, darkestS);
    contacts[getIndex() % 8 ].setDarkestS(darkestS);
     if(getIndex() <= 8)
       setTotalC(getTotalC() + 1);
    setIndex(getIndex() + 1);
}

std::string PhoneBook::contactsList()
{
    int i;
    std::string index;
    
    i = 0;
    if(getTotalC() > 0)
    {  
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "  index  |first name|last name | nickname |" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        for(i = 0; i < getTotalC(); i++)
        {
            std::cout <<"        ";
            std::cout << i << "|" ;
            displayList(contacts[i].getFirstN());
            std::cout << "|";
            displayList(contacts[i].getLastN());
            std::cout << "|";
            displayList(contacts[i].getnickN());
            std::cout << "|"<<std::endl;
        }
        std::cout << "------------------------------------------" <<std::endl;
        std::cout  << "Please enter index of the choosing contact : " << std::endl;
        getline(std::cin,index);
        while(is_valid(index) == 1)
        {
            std::cout  << "Please enter index of the choosing contact : " << std::endl;
            getline(std::cin,index);
        }
    }
    else
        std::cout<< "** there is no contact in the list **"<< std::endl;
    return index;
}

void PhoneBook::searchContact()
{
    std::string index;

    index = contactsList();
    if(stoi(index) > 8)
        std::cout << " this index in out of range !!!!" << std::endl;
    else if(stoi(index) >= 0 && stoi(index) < getTotalC())
    {
        std::cout << " First name     : " << contacts[stoi(index)].getFirstN() << std::endl;
        std::cout << " Last name      : " << contacts[stoi(index)].getLastN() << std::endl;
        std::cout << " nick name      : " << contacts[stoi(index)].getnickN() << std::endl;
        std::cout << " phone number   : " << contacts[stoi(index)].getPhoneN() << std::endl;
        std::cout << " Darkest secret : " << contacts[stoi(index)].getDarkestS() << std::endl;
    }
    else 
       std::cout<<"** there is no contat in this index **"<< std::endl;
}
