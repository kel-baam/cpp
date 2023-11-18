/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:18:07 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/11 10:35:05 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSigne;
        const int _gradeExecute;
    public:
        Form();
        ~Form();
        Form(std::string name, const int gradeSi,const int gradeEx);
        Form(const Form& obj);
        Form operator=(const Form& obj);
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
        void beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& outfile,const Form& obj);

#endif