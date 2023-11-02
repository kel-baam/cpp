/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:30:45 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 15:35:41 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
 {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *a = new WrongCat();
    const WrongAnimal *b= new WrongAnimal();
    
    WrongCat p = WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete(meta);
    delete(j);
    delete(i);
    
    std::cout << "----------------------------------------------------"<< std::endl;
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    
    a->makeSound();
    b->makeSound();
    p.makeSound();
    delete(a);
    delete(b);    
}