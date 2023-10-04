/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:44:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/03 17:24:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include<ios> //used to get stream size
#include<limits>
int main()
{
    std::string choice;
    PhoneBook phoneBook;
    
    //std::cout <<"Please choose ADD or SEARCH or EXIT : "<<std::endl;
    while(1)
    {
        std::cout <<"Please choose ADD or SEARCH or EXIT : "<<std::endl;
     
       if(getline(std::cin,choice))
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
   return 0;
}
