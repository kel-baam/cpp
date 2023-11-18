/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 17:45:33 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   

   

    AForm *form = new ShrubberyCreationForm("kawtar");
    AForm *Robotomy = new RobotomyRequestForm("salma");
    AForm *Presidential = new PresidentialPardonForm("med");
    
    try
    { 
        Bureaucrat bureaucratA = Bureaucrat("bureaucratA",10);
        bureaucratA.decrementGrade();
        std::cout << bureaucratA << std::endl;
        form->beSigned(bureaucratA);
        form->execute( bureaucratA);
        bureaucratA.executeForm(*form);
        std::cout << *form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"\n\n-------------------------------------------------\n\n";
    try
    {   
        Bureaucrat bureaucratB= Bureaucrat("bureaucratB",14);
        bureaucratB.incrementGrade();
        std::cout << bureaucratB << std::endl;
        // Robotomy->beSigned(bureaucratB);
        Robotomy->execute(bureaucratB);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"\n\n-------------------------------------------------\n\n";
    try
    { 
        Bureaucrat bureaucratC= Bureaucrat("bureaucratC",5);
        std::cout << bureaucratC << std::endl;
        Presidential->beSigned(bureaucratC);
        Presidential->execute(bureaucratC);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"\n\n-------------------------------------------------\n\n";
    
}

// i should check the grade in the constroctur?????