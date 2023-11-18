/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:48:18 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/17 10:46:49 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"





//stof
//stod
// 1 2 3



//char 

int main(int ac, char **av)
{
    if(ac > 1)
    {
        ScalarConverter obj;   
        obj.convert(av[1]);
    }
}

//parse if is floar or int or double

//parse data 
//float number.0f
//double .0
// int whitout .


