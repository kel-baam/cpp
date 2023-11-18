/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:05 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/13 11:57:59 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include <cstring> 


class AForm;
class Bureaucrat:public std::exception
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat operator=(const Bureaucrat& obj);
        virtual ~Bureaucrat() _NOEXCEPT;

        std::string getName()const;
        int getGrade()const;
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm &form);

        class GradeTooHighException:public exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException:public exception
        {
            public:
                const char* what() const throw();
        };
   

        void executeForm(AForm const & form);
       
};
        std::ostream& operator<<(std::ostream& outfile, const Bureaucrat& obj);
#endif