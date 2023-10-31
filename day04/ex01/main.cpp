/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:13:10 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/30 18:12:02 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
  const Animal *obj[10];
  
  for(int i =0; i<10;i++)
  {
    if(i %2 ==0)
      obj[i]=new Dog();
    else
      obj[i] = new Cat();
  }
    
  for(int i = 0; i < 10;i++)
  {
    std::cout << obj[i]->getType() << std::endl;
    obj[i]->makeSound();
  }
   for(int i =0; i<10;i++)
      delete (obj[i]);
  
  system("leaks Brain");
}

