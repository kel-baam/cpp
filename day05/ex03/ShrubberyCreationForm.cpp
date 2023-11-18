/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:50:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/12 13:06:21 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Default",145,137)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Default",145,137),_target("Default")
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    operator=(obj);
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    _target = obj._target;
    return *this;
}

void ShrubberyCreationForm::Formaction()const
{
    std::ofstream MyFile(_target+"_shrubbery");
    MyFile <<    "           .     .  .      +     .      .          .\n"
                 "     .       .      .     #       .           .\n"
                 "        .      .         ###            .      .      .\n"
                 "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                 "          .      . \"####\"###\"####\"  .\n"
                 "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
                 "  .             \"#########\"#########        .        .\n"
                 "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n" 
                 "     .     .  \"#######\"##\"##\"\"#######\"                  .\n"
                 "                .\"##\"#####\"#####\"##\"           .      .\n"
                 "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
                 "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
                 "    .    .     \"#####\"\"#######\"\"####\"    .      .\n"
                 "            .     \"      000      \"    .     .\n"
                 "       .         .   .   000     .        .       .\n"
                 ".. .. ..................O000O........................ ...... ...\n";

    // close(_target+"_shrubbery");
}

/* ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/