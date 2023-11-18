/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:12:24 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/14 11:47:51 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
    
Intern::~Intern(){}

Intern::Intern(const Intern &obj)
{
    operator=(obj);
}
Intern Intern::operator=(const Intern & obj)
{
    (void)obj;
    return *this;
}


AForm* Intern::makeForm(std::string FormName,std::string target)
{
    (void)FormName;
    int i =0;
    
    std::string arr[3] ={"robotomy request","shrubbery request","presidential request"};
    AForm* storeFunction[] ={new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
    while(i < 3)
    {
        if(FormName == arr[i])
        {
            std::cout << "Intern creates " << FormName << std::endl;
            return storeFunction[i];
        }
        i++;
    }
    return NULL;
}