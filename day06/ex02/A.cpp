/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:27:32 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 11:16:54 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
    type = "A";
    std::cout << " Welcom in class A \n";
}

void A::TypeA()
{
    std::cout << " the type of this class is A "<< std::endl;
}