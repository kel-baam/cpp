/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:38 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/17 17:28:42 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>
class Fixed 
{
    private:
        float  FixedPointNumber;
        static const int  numberBits = 8;

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
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        int getRawBits( void ) const; 
        Fixed& operator++();
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator--();
        bool operator!=(const Fixed &obj)const ;
        bool operator>(const Fixed &obj)const;
        bool operator>=(const Fixed &obj)const;
        bool operator<(const Fixed &obj)const;
        bool operator<=(const Fixed &obj)const;
        bool operator==(const Fixed &obj)const;

        //bool operator!=(const Fixed &obj);
        //tomorrow
        // static int min(Fixed &num1,Fixed &num2);
        // static int min(Fixed const &num1,Fixed const &num2);        
        // static int max(Fixed &num1,Fixed &num2);
// static float& max(Fixed const &num1, Fixed const &num2)
// {
//     if(num1.getRawBits() > num2.getRawBits())
//         return num1.getRawBits() / 256;
//     return num2.getRawBits() /256;
// }
        

};
std::ostream &operator<<(std::ostream& output,const Fixed& obj);
// > <  >= <= == != 

#endif