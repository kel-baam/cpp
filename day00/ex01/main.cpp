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
 
    string choice;
    PhoneBook phoneBook;
    while(1)
    {     
     
        cout <<"Please choose ADD or SEARCH or EXIT : "<<endl;
        cin >> choice;
        if(choice == "ADD")
         phoneBook.addContact();
        if(choice == "SEARCH")
            phoneBook.searchContact();
         if(choice == "EXIT")
            break;
    }
   return 0;
}
