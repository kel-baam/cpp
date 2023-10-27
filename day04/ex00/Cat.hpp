/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:10:07 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:33:00 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat &obj);
        Cat operator=(const Cat&obj);
        ~Cat();
       void makeSound()const;
};

#endif