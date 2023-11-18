/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:49:55 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 13:06:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm:public AForm
{
    std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        //parametraze
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm operator=(const PresidentialPardonForm& obj);
        void Formaction()const;
};