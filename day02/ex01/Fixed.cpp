/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:43:22 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/17 14:43:23 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* default constructor */

Fixed::Fixed():FixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
};

/* A constructor that takes a constant integer as a parameter */


Fixed::Fixed(const int integer)
{
    FixedPointNumber = integer * 256;
    std::cout << "Int constructor called" << std::endl;
}

/*A constructor that takes a constant floating-point number as a parameter*/

Fixed::Fixed(const float floatNumber)
{
    std::cout << "Float constructor called"<<std::endl;
    FixedPointNumber =roundf(floatNumber * 256);
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

    FixedPointNumber =  fixed.getRawBits();

}

int Fixed::getRawBits ( void )const
{
    // std::cout << "getRawBits member function called " << FixedPointNumber<< std::endl;
    return FixedPointNumber;
}

/*converts the fixed-point value to a floating-point value.*/

float Fixed::toFloat( void ) const
{
    return FixedPointNumber / 256;
}
/*converts the fixed-point value to an integer value*/
int Fixed::toInt( void ) const
{
    return FixedPointNumber / 256;
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