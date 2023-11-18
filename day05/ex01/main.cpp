/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:11 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 13:23:21 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
   
    Bureaucrat bureaucratA = Bureaucrat("bureaucratA",3);
    Bureaucrat bureaucratB= Bureaucrat("president",140);
    Form form = Form("Form1",5,4);
    try
    {
        bureaucratA.decrementGrade();
        std::cout << bureaucratA << std::endl;
        form.beSigned(bureaucratA);
        bureaucratA.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout<<"-------------------------------------------------\n";
    try
    {
        bureaucratB.incrementGrade();
        std::cout << bureaucratB << std::endl;
        form.beSigned(bureaucratB);
        bureaucratA.signForm(form);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
}
