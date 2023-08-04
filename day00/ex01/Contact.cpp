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

void Contact::setFirstN(string firstN)
 {
    firstName =firstN;
 }
void  Contact::setLastN(string lastN)
 {
    lastName = lastN;
 }

void Contact::setnickN(string nickN)
{
    nickName=nickN;
}
void Contact::setPhoneN(int phoneN)
{
    phoneNumber = phoneN;
}
void Contact::setDarkestS(string darkestS)
{
    darkestSecret = darkestS; 
}
string Contact::getFirstN()
{
    return firstName;
}
string Contact::getLastN()
{
    return lastName;
}
string Contact::getnickN()
{
    return nickName;
}
int Contact::getPhoneN()
{
    return phoneNumber;
}
string Contact::getDarkestS()
{
    return darkestSecret;
}
