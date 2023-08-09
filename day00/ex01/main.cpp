/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:44:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/29 16:44:05 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int main()
{
    std::string choice;
    bool flag;
    PhoneBook phoneBook;
    std::cout <<"Please choose ADD or SEARCH or EXIT : "<<std::endl;
    while(std::getline(std::cin,choice))
    {
        flag= true;
        if(choice == "ADD")
        {
            flag=false;
            phoneBook.addContact();
        } 
        else if(choice == "SEARCH")
        {
                flag=false;
              phoneBook.searchContact();
        }
        else if(choice == "EXIT")
                break;
        
        if(flag == true)
            std::cout <<"Please choose ADD or SEARCH or EXIT : "<<std::endl;
    }
   return 0;
}
