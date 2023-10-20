/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:35 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/20 13:02:10 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
        return 0;
}
// int main( void ) 
// {
//         Fixed a(3.2f);
//         Fixed const b(3.4f);
        
//         std::cout << b << std::endl;
//         std::cout << a << std::endl;
//         std::cout << (a > b) << std::endl;
//         std::cout << (a >= b) << std::endl;
//         std::cout << (a <= b) << std::endl;
//         std::cout << (a < b) << std::endl;
//         std::cout << (a == b) << std::endl;
//         std::cout << (a != b) << std::endl;
//         std::cout << (a + b) << std::endl;
//         std::cout << (a * b) << std::endl;
//         std::cout << (a - b) << std::endl;
//         std::cout << (b / a) << std::endl;
//         std::cout << Fixed::max( a, b ) << std::endl;
//         std::cout << Fixed::max( a, b ) << std::endl;
//         std::cout << Fixed::min( a, b ) << std::endl;
//         std::cout << Fixed::min( a, b ) << std::endl;
        
//         return 0;
// }