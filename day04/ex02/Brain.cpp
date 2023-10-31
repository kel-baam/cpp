/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:03:19 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/30 09:07:21 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
    ideas = new std::string[100];
      for(int i = 0; i < 100; i++)
        ideas[i]= "Ideas Brain";
}

Brain::Brain(const std::string& name)
{
    ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        ideas[i]= name;
    std::cout << "Brain parametrize constructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain&obj)
{
    delete[] ideas;
    ideas = new std::string[100];
    for(int i=0;i < 100;i++)
        ideas[i] = obj.ideas[i];
    return *this;
}

Brain::~Brain()
{
    delete[] ideas;
    std::cout << "Brain destructor "<< std::endl;
}
