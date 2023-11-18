/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/14 11:49:35 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   
    Bureaucrat bureaucratA = Bureaucrat("bureaucratA",10);
    Bureaucrat bureaucratB= Bureaucrat("bureaucratB",14);
    Bureaucrat bureaucratC= Bureaucrat("bureaucratC",5);
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    
    AForm *form = new ShrubberyCreationForm("kawtar");
    AForm *Robotomy = new RobotomyRequestForm("salma");
    AForm *Presidential = new PresidentialPardonForm("med");
    
    try
    {
        bureaucratA.decrementGrade();
        std::cout << bureaucratA << std::endl;
        std::cout << *form << std::endl;
        form->beSigned(bureaucratA);
        form->execute( bureaucratA);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"\n\n-------------------------------------------------\n\n";
    try
    {
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
        std::cout << bureaucratC << std::endl;
        Presidential->beSigned(bureaucratC);
        Presidential->execute(bureaucratC);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

// i should check the grade in the constroctur?????