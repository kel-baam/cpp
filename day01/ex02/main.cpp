/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:52:15 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 13:52:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string valeur ="HI THIS IS BRAIN";
    std::string *stringPTR = &valeur;;
    std::string &stringREF = valeur;;
   
    std::cout<< "Address of string "<<&valeur<<std::endl;
    std::cout<< "Address of stringPTR "<<&stringPTR<<std::endl;
    std::cout<< "Address of stringREF "<<&stringREF<<std::endl;
    std::cout <<"----------------valeur-------------------"<<std::endl;

    std::cout<< "valeur of string     : "<<valeur<<std::endl;
    std::cout<< "valeur of stringPTR  : "<<*stringPTR<<std::endl;
    std::cout<< "valeur of stringREF  : "<<stringREF<<std::endl;

}
