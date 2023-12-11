/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:29:41 by kel-baam          #+#    #+#             */
/*   Updated: 2023/12/10 10:57:32 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data data;
    int num = 5;
    data.num = &num;
    data.str = "kawtar";
    uintptr_t ptr;
   ptr = Serializer::serialize(&data);
   Data tmp = *Serializer::deserialize(ptr);
   std::cout << *(tmp.num) << std::endl;
   std::cout << (tmp.str) << std::endl;   
}