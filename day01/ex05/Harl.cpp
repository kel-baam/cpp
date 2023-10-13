/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:58:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/11 11:31:26 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}

void Harl::info( void )
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning( void )
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

 void Harl::error( void )
 {
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
 }
 
void Harl::complain( std::string level)
{
    void (Harl::*debugPtr[])()  = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
    std::string choices[4] = { "DEBUG","INFO","WARNING", "ERROR"};
    int i;

    i = 0;
    while(i < 4)
    {
        if(level == choices[i])
        {
             (this->*debugPtr[i])();
             break;
        }
        i++;
    }
    if(i == 4)
        std::cout<<"Invalid level"<< std::endl;
}
