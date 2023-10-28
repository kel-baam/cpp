/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:03:19 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 18:36:43 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain(const std::string& name)
{
    for(int i =0; i<100;i++)
        ideas[i]= name;
    std::cout << ideas << "ppp"<< std::endl;
    std::cout << "Brain parametrize constructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    operator=(obj);
}

Brain& Brain::operator=(const Brain&obj)
{
    for(int i=0;i < 100;i++)
        ideas[i] = obj.ideas[i];
    std::cout << "this " << this<< std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor "<< std::endl;
}

