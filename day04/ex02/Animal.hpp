/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:02:52 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 18:48:07 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& obj);
        Animal operator=(const Animal& obj);
        virtual ~Animal();
        void setType(const std::string& type);
        const std::string&  getType()const;
        virtual void makeSound()const=0;
        
};

#endif