/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:08 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 17:41:27 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat::Bureaucrat():_name("defaultName"),_grade(0)
{
    
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name)
{
    _grade = grade;
     if(_grade < 0)
        throw Bureaucrat::GradeTooHighException();
    else if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()_NOEXCEPT
{
    
}

std::string Bureaucrat::getName()const
{
    return _name;
}

int Bureaucrat::getGrade()const
{
    return _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    _grade = obj._grade;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat& obj)
{
    _grade = obj._grade;
    return *this;
}

void Bureaucrat::incrementGrade()
{
    if(_grade < 0)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{  
   
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
   _grade++;
}
std::ostream& operator<<(std::ostream& outfile, const Bureaucrat& obj)
{ 
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return outfile;
}

const char* Bureaucrat::GradeTooHighException::what() const  throw()
{
    return " Grade too high\n" ;
}


const char* Bureaucrat::GradeTooLowException::what() const  throw()
{
    return " Grade too Low\n";
}



void Bureaucrat::signForm(Form &form)
{
    if(form.getIsSigned() != false)
    {
        std::cout<< getName() << " signed " << form.getName()<< std::endl;
    }
    else
    std::cout <<getName() << " Bureaucrat::" << form.getName() << std::endl;
}

