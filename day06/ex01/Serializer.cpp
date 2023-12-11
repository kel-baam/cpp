/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:34:55 by kel-baam          #+#    #+#             */
/*   Updated: 2023/12/10 10:50:06 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer& obj)
{
    (void)obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
    (void)obj;
    return *this;
}

Serializer::~Serializer(){}

std::uintptr_t Serializer::serialize(Data* ptr)
{
    std::uintptr_t value;
    value = reinterpret_cast<std::uintptr_t>(ptr);
    return value;
}

Data* Serializer::deserialize(std::uintptr_t raw)
{
    Data *data;
    data =  reinterpret_cast<Data*>(raw);
    return data;
}

