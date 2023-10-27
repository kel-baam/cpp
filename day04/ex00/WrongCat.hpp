/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:41:48 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/27 16:43:20 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "Animal.hpp"

class WrongCat:public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string& type);
        WrongCat(const WrongCat &obj);
        Cat operator=(const WrongCat&obj);
        ~WrongCat();
       void makeSound()const;
};

#endif