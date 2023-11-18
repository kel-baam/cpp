/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:49:58 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 13:06:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Default",72,45)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm():AForm("Default",72,45),_target("Default"){}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    operator=(obj);
}
RobotomyRequestForm  RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    _target = obj._target;
    return *this;
}
void RobotomyRequestForm::Formaction()const
{
    std::cout <<_target<< " has been robotomized successfully 50% of the time." << std::endl;
}