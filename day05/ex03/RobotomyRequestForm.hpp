/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:50:00 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 13:06:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm:public AForm
{
    std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);

        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm operator=(const RobotomyRequestForm& obj);
        void Formaction()const;

};