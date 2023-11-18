/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 17:48:29 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
   
    

    try
    {
        Bureaucrat bureaucratA = Bureaucrat("bureaucratA",-2);
        std::cout << bureaucratA << std::endl; 
        bureaucratA.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"-------------------------------------------------\n";
    try
    {   
        Bureaucrat bureaucratB = Bureaucrat("bureaucratB",155);
        std::cout << bureaucratB << std::endl;
        bureaucratB.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"-------------------------------------------------\n";
     try
    {
        Bureaucrat bureaucratC = Bureaucrat("bureaucratA",2);
        std::cout << bureaucratC << std::endl; 
        bureaucratC.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
}