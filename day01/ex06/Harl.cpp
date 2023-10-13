/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:45:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/10 12:05:34 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout<< "[ DEBUG ]"<< std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}

void Harl::info( void )
{
    std::cout<< "[ INFO ]"<< std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning( void )
{
    std::cout<< "[ WARNING ]"<< std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

 void Harl::error( void )
 {
    std::cout<< "[ ERROR ]"<< std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
 }
