/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:29:41 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 15:38:33 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data data;
    data.num = 5;
    uintptr_t ptr = 0;
   Serializer::serialize(&data);
   std::cout <<  ptr << std::endl;
    
}