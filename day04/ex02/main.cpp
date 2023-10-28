/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:49:38 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 18:55:03 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"



int main()
{
    const Cat *obj1 = new Cat();
    const Dog *obj2 = new Dog();
    
    std::cout << obj1->getType() << std::endl;
    std::cout << obj2->getType()<< std::endl;
    obj1->makeSound();
    obj2->makeSound();
    delete(obj1);
    delete(obj2);
}