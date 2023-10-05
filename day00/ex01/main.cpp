/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:44:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/05 19:10:25 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char**av)
{
    std::string choice;
    PhoneBook phoneBook;
    (void)**av;
    if(ac == 1)
    {
        while(1)
        {
            std::cout <<"Please choose ADD or SEARCH or EXIT : "<<std::endl;
            getline(std::cin,choice);
            if(!std::cin.eof())
            {
                  if(choice == "ADD")
                        phoneBook.addContact();
                    else if(choice == "SEARCH")
                        phoneBook.searchContact();
                    else if(choice == "EXIT")
                        break;
            }
            else
                break;
                  
        }
            
    }
   return 0;
}
