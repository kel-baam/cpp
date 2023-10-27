/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:10 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:14:04 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog:public Animal
{
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog &obj);
        Dog operator=(const Dog&obj);
        ~Dog();
        void makeSound()const;
    };

#endif