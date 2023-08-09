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

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact(){};
        ~Contact(){};
        void setFirstN(std::string firstN);
        void setLastN(std::string lastN);
        void setnickN(std::string nickN);
        void setPhoneN(std::string phoneN);
        void setDarkestS(std::string darkestS);
        std::string getFirstN();
        std::string getLastN();
        std::string getnickN();
        std::string getPhoneN();
        std::string getDarkestS();
};
