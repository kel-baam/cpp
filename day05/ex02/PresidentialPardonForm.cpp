/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:49:52 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/13 11:29:03 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Default",25,5),_target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Default",25,5)
{
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}
        //parametraze
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    operator=(obj);
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    _target = obj._target;
    return *this;
}

       
void PresidentialPardonForm::Formaction()const
{
    std::cout<<_target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}