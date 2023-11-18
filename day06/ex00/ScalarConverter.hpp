/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:43:54 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:22 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <algorithm>

class  ScalarConverter
{
    public:
        ScalarConverter();
        // ScalarConverter(const &ScalarConverter obj);
        // ScalarConverter operator=(const ScalarConverter obj);
        // ~ScalarConverter();
        void convert(std::string str);
};