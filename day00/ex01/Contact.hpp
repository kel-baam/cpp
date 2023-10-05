/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:43:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/05 15:25:37 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include<ios>
#include<limits>

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
