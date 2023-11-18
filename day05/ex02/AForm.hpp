/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:18:07 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/13 12:07:06 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSigne;
        const int _gradeExecute;
    public:
        AForm();
        virtual ~AForm();
        AForm(std::string name, const int gradeSi,const int gradeEx);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        bool getIsSigned()const;     
        const std::string getName()const;
        int getGradeSigne()const;
        int getGradeExecute()const;
        
        class GradeTooHighException:public std::exception
        {
            public:
                const char* what() const throw();
            
        };
        class GradeTooLowException:public std::exception
        {
             public:
                const char* what() const throw();
        };
        class FormSignedError:public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        void beSigned(const Bureaucrat& bureaucrat);
        void execute(Bureaucrat const & executor) const;
        virtual void Formaction()const = 0; 
};

std::ostream& operator<<(std::ostream& outfile,const AForm& obj);

#endif