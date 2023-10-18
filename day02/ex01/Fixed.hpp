/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:17 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/18 16:06:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

//negative number
#include <iostream>
#include <cmath>
class Fixed 
{
    private:
        int  FixedPointNumber;
        static const int  numberBits = 8;

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floatNumber);

        Fixed(const Fixed &initNumber);
        ~Fixed();
        Fixed &operator=(const Fixed& other);
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};
std::ostream &operator<<(std::ostream& output,const Fixed& obj);


#endif