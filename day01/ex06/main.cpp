/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:19 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/12 13:09:38 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::harlList(int index)
{
    void (Harl::*debugPtr[])()  = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
    
    (this->*debugPtr[index])();
}

int harlChoice(char *choice)
{
    std::string choices[4] = {"DEBUG","INFO","WARNING", "ERROR"};
    int i;

    i = 0;
    while(i < 4)
    {
        if(choice == choices[i])
            return i;
        i++;
    }
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
            case 1:
                harl.harlList(1);
            case 2:
                harl.harlList(2);
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