/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:42 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/18 18:36:11 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* default constructor */

Fixed::Fixed():FixedPointNumber(0)
{};

/* A constructor that takes a constant integer as a parameter */


Fixed::Fixed(const int &integer)
{
    FixedPointNumber = integer * 256;
}

/*A constructor that takes a constant floating-point number as a parameter*/

Fixed::Fixed(const float &floatNumber)
{
    FixedPointNumber =roundf(floatNumber * 256);
}

/*destructor*/

Fixed::~Fixed()
{}

/* Copy constructor */

Fixed::Fixed(const Fixed& fixed)
{
    FixedPointNumber =  fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& secondObj)
{
    FixedPointNumber = secondObj.getRawBits();
    return *this;
}

int Fixed::getRawBits ( void )const
{
    return FixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
    Fixed::FixedPointNumber = raw;
}
/*converts the fixed-point value to a floating-point value.*/

float Fixed::toFloat( void ) const
{
    return FixedPointNumber / 256.0f;
}
/*converts the fixed-point value to an integer value*/
int Fixed::toInt( void ) const
{
    return FixedPointNumber / 256;
}

std::ostream &operator<<(std::ostream& output, const Fixed& obj)
{
    std::cout<< obj.toFloat();
    return output;       
}

const Fixed Fixed::operator*(const Fixed &obj)const
{
     Fixed result;
    result.setRawBits(FixedPointNumber * obj.getRawBits() / 256);
    return  result;
}

Fixed Fixed::operator/(Fixed &obj)const
{
    Fixed result;
    if(obj.getRawBits() == 0)
    {
        std::cout<< "check ur input maybe u enter ";
        return result;
    }
    result.setRawBits((getRawBits() / obj.getRawBits()) / 256);
    return result;
}

Fixed Fixed::operator+(const Fixed &obj)const
{
    Fixed result;
   
    result.FixedPointNumber = getRawBits() + obj.getRawBits();
    return result;
}

Fixed Fixed::operator-(const Fixed &obj)const
{
    Fixed result;
    result.setRawBits(getRawBits() - obj.getRawBits());
    return result;
}

Fixed &Fixed::operator--()
{
    FixedPointNumber--;
    return *this;
}

Fixed &Fixed::operator++()
{
    FixedPointNumber++;
    return *this;
}

//why const necassry
bool  Fixed::operator!=(const Fixed &obj)const
{
    return (getRawBits() != obj.getRawBits());
}

bool  Fixed::operator>(const Fixed &obj)const
{
    return (getRawBits() > obj.getRawBits());
}

bool  Fixed::operator<(const Fixed &obj)const
{
    return (getRawBits() < obj.getRawBits());
}

bool  Fixed::operator>=(const Fixed &obj)const
{
    return (getRawBits() >= obj.getRawBits());
}

bool  Fixed::operator<=(const Fixed &obj)const
{
    return (getRawBits() <= obj.getRawBits());
}

bool  Fixed::operator==(const Fixed &obj)const
{
    return (getRawBits() == obj.getRawBits());
}

Fixed Fixed::operator++(int)
{
    Fixed obj(*this);
    FixedPointNumber++;
    return obj;
}
Fixed Fixed::operator--(int)
{
    Fixed obj(*this);
    FixedPointNumber--;
    return obj;
}

Fixed& Fixed::min(Fixed &num1, Fixed &num2)
{
    
    if(num1.getRawBits() < num2.getRawBits())
        return num1;
    return num2;
}

const Fixed& Fixed::min(Fixed const &num1, Fixed const  &num2)
{
    
    if(num1.getRawBits() < num2.getRawBits())
        return num1;
    return num2;
}

Fixed& Fixed::max(Fixed &num1, Fixed &num2)
{
    
    if(num1.getRawBits() > num2.getRawBits())
        return num1;
    return num2;
}
   

const Fixed& Fixed::max(Fixed const &num1, Fixed const &num2)
{
    
    if(num1.getRawBits() > num2.getRawBits())
        return num1;
    return num2;
}
   