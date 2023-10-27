/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:52 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:41:21 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal operator=(const WrongAnimal& obj);
        virtual ~WrongAnimal();
        void setType(const std::string& type);
        const std::string&  getType()const;
        void makeSound()const;
        
};

#endif