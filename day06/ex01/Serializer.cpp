/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:34:55 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/18 15:40:25 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}


uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t value;
    
    value = reinterpret_cast<uintptr_t>(ptr);
    return value;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *data;
    
    data =  reinterpret_cast<Data>(raw);
    return data;
}

