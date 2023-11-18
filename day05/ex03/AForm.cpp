/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:18:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/13 11:43:45 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//abstract class 
#include "AForm.hpp"

AForm::AForm():_name("DefaultName"),_isSigned(false),_gradeSigne(0),_gradeExecute(0){}

AForm::~AForm(){}

AForm::AForm(std::string name, const int gradeSi,const int gradeEx):_name(name),_gradeSigne(gradeSi),_gradeExecute(gradeEx){}

AForm::AForm(const AForm& obj):_name(obj._name),_isSigned(obj._isSigned),_gradeSigne(obj._gradeSigne),_gradeExecute(obj._gradeExecute){}

AForm& AForm::operator=(const AForm& obj)
{
    // implementation
    (void)obj;
    return *this;
}

bool AForm::getIsSigned()const
{
    return _isSigned;
}
const std::string AForm::getName()const
{
    return _name;
}
int AForm::getGradeSigne()const
{
    return _gradeSigne;
}
int AForm::getGradeExecute()const
{
    return _gradeExecute;
}

std::ostream& operator<<(std::ostream& outfile,const AForm& obj)
{
    std::cout << "    Information of form    \n";
    std::cout << "Name :" << obj.getName() << std::endl;
    std::cout << "isSigned :"<< obj.getIsSigned()<< std::endl;
    std::cout << "Grade for signe :" << obj.getGradeSigne() << std::endl;
    std::cout << "Grade for execute :" <<  obj.getGradeExecute() << std::endl;
    return outfile;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "grade for sign a form is too High";
}

const char*  AForm::GradeTooLowException::what() const throw()
{
    return "grade for sign a form is too Low";
}
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() > 150)
       throw  GradeTooLowException();
    else if(bureaucrat.getGrade() < 1)
      throw GradeTooHighException();
    if(bureaucrat.getGrade() <= _gradeSigne)
            _isSigned = true;
    else
        throw GradeTooLowException();
}


void  AForm::execute(Bureaucrat const & bureaucrat) const
{
    if(bureaucrat.getGrade() > _gradeExecute)
        throw GradeTooLowException();
    if(_isSigned == false)
         throw GradeTooLowException();
         //exception
   Formaction();
//    bureaucrat.setIsExecuted(1);
}
//<bureaucrat> executed <form> 