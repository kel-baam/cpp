/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:38 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>
class Fixed 
{
    private:
       int  FixedPointNumber;
        static const int  numberBits;

    public:
        Fixed();
        Fixed(const int &integer);
        Fixed(const float& floatNumber);
        Fixed(const Fixed &initNumber);
        ~Fixed();
        Fixed &operator=(const Fixed& other);
        
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        
        Fixed operator+(const Fixed &obj)const;
        Fixed operator-(const Fixed &obj)const;
        Fixed operator*(const Fixed &obj)const;
        Fixed operator/(Fixed &obj)const;
        
        //pre-increment  && Post-increment && pre-decrement && post-decrement
        Fixed& operator++();
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator--();
        // comparison operators  >, <, >=, <=, == and != 
        bool operator!=(const Fixed &obj)const;
        bool operator>(const Fixed &obj)const;
        bool operator>=(const Fixed &obj)const;
        bool operator<(const Fixed &obj)const;
        bool operator<=(const Fixed &obj)const;
        bool operator==(const Fixed &obj)const;

        // static functions 
        static Fixed& min(Fixed &num1, Fixed &num2);
        static const Fixed& min(const Fixed &num1, const Fixed &num2);
        static Fixed& max(Fixed &num1, Fixed &num2);
        static const  Fixed& max(const Fixed &num1, const Fixed &num2);
};
std::ostream &operator<<(std::ostream& output,const Fixed& obj);


#endif