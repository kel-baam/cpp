/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:22 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/20 10:57:30 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* default constructor */
const int Fixed::numberBits = 8;

Fixed::Fixed():FixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
};

/* A constructor that takes a constant integer as a parameter */

Fixed::Fixed(const int integer)
{
    FixedPointNumber = integer << numberBits ;
    std::cout << "Int constructor called" << std::endl;
}

/*A constructor that takes a constant floating-point number as a parameter*/

Fixed::Fixed(const float floatNumber)
{
    std::cout << "Float constructor called"<<std::endl;
    FixedPointNumber = roundf(floatNumber *(float)(1 << numberBits));
}

/*destructor*/

Fixed::~Fixed()
{
   std::cout << "Destructor called" << std::endl;
}

/* Copy constructor */

Fixed::Fixed(const Fixed& fixed)
{
    std::cout<<"Copy constructor called"<< std::endl;
    operator=(fixed);

}

int Fixed::getRawBits ( void )const
{
    // std::cout << "getRawBits member function called " << FixedPointNumber<< std::endl;
    return FixedPointNumber;
}
void Fixed::setRawBits( int const raw )
{
    FixedPointNumber = raw;
}
/*converts the fixed-point value to a floating-point value.*/

float Fixed::toFloat( void ) const
{
    return (FixedPointNumber /  (float)(1 << numberBits));
}

/*converts the fixed-point value to an integer value*/
int Fixed::toInt( void ) const
{
    return FixedPointNumber >> numberBits;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    FixedPointNumber = other.getRawBits();
    return *this;
}

std::ostream &operator << (std::ostream& output, const Fixed& obj)
{
    std::cout<< obj.toFloat();
    return output;       
}