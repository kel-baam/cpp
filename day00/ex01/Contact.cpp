/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:00 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/29 16:43:07 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setFirstN(std::string firstN)
 {
    firstName =firstN;
 }
void  Contact::setLastN(std::string lastN)
 {
    lastName = lastN;
 }

void Contact::setnickN(std::string nickN)
{
    nickName=nickN;
}
void Contact::setPhoneN(std::string phoneN)
{
    phoneNumber = phoneN;
}
void Contact::setDarkestS(std::string darkestS)
{
    darkestSecret = darkestS; 
}
std::string Contact::getFirstN()
{
    return firstName;
}
std::string Contact::getLastN()
{
    return lastName;
}
std::string Contact::getnickN()
{
    return nickName;
}
std::string Contact::getPhoneN()
{
    return phoneNumber;
}
std::string Contact::getDarkestS()
{
    return darkestSecret;
}
