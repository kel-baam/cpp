/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:19 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 17:37:43 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::harlList(int index)
{
    void (Harl::*debugPtr[])()  = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
    int lengthList = 4;
    
    while(index < lengthList)
    {
        (this->*debugPtr[index])();
        std::cout<<std::endl;
        index++;
    }
}

int harlChoice(char *choice)
{
    if(!strcmp(choice,"DEBUG"))
        return 0;
    else if(!strcmp(choice,"INFO"))
        return 1;
    else if(!strcmp(choice,"WARNING"))
        return 2;
    else if(!strcmp(choice,"ERROR"))
        return 3;
    return -1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int choice;
        Harl harl;
        choice = harlChoice(av[1]);
        switch(choice)
        {
            case 0:
                harl.harlList(0);
                break;
            case 1:
                harl.harlList(1);
                break;
            case  2:
                harl.harlList(2);
               break;
            case 3:
                harl.harlList(3);
               break;
            default:
                    std::cout<< "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    else
        std::cout<< "Please enter one argument"<< std::endl;
}