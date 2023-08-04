/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/29 16:43:35 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Contact
{
    private:
        string firstName;
        string lastName;
        string nickName;
        int    phoneNumber;
        string darkestSecret;
    public:
        void setFirstN(string firstN);
        void setLastN(string lastN);
        void setnickN(string nickN);
        void setPhoneN(int phoneN);
        void setDarkestS(string darkestS);
        string getFirstN();
        string getLastN();
        string getnickN();
        int getPhoneN();
        string getDarkestS();
};
