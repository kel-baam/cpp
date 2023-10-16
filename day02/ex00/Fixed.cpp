/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:08:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/15 13:08:04 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


//copy constructor it allow as to creat a new object as a copy of existing object of the same class 
//The copy constructor is automatically called when a new object is created from an existing object or when objects are passed by value.
Fixed::Fixed():FixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed()
{
   std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed& fixed)
{
    std::cout<<"Copy constructor called"<< std::endl;
    FixedPointNumber =  fixed.getRawBits();

}
 int Fixed::getRawBits ( void )const
 {
    std::cout << "getRawBits member function called" << std::endl;
    return FixedPointNumber;
 }

void Fixed::setRawBits( int const raw )
{
    Fixed::FixedPointNumber = raw;
}
Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    FixedPointNumber = other.getRawBits();
    return *this;
}