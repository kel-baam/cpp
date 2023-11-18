/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:18:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 18:31:35 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form():_name("DefaultName"),_isSigned(false),_gradeSigne(0),_gradeExecute(0){}

Form::~Form(){}

Form::Form(std::string name, const int gradeSi,const int gradeEx):_name(name),_gradeSigne(gradeSi),_gradeExecute(gradeEx){}

Form::Form(const Form& obj):_name(obj._name),_isSigned(obj._isSigned),_gradeSigne(obj._gradeSigne),_gradeExecute(obj._gradeExecute)
{}

Form Form::operator=(const Form& obj)
{
    // implementation
    (void)obj;
    return *this;
}

bool Form::getIsSigned()const
{
    return _isSigned;
}
const std::string Form::getName()const
{
    return _name;
}
int Form::getGradeSigne()const
{
    return _gradeSigne;
}
int Form::getGradeExecute()const
{
    return _gradeExecute;
}

std::ostream& operator<<(std::ostream& outfile,const Form& obj)
{
    std::cout << "    Information of form    \n";
    std::cout << "Name :" << obj.getName() << std::endl;
    std::cout << "isSigned :"<< obj.getIsSigned()<< std::endl;
    std::cout << "Grade for signe :" << obj.getGradeSigne() << std::endl;
    std::cout << "Grade for execute :" <<  obj.getGradeExecute() << std::endl;
    return outfile;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "grade for sign a form is too High";
}

const char*  Form::GradeTooLowException::what() const throw()
{
    return "grade for sign a form is too Low";
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= _gradeSigne)
            _isSigned = true;
    else
        throw GradeTooLowException();
}