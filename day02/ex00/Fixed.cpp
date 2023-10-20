/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:08:03 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/19 14:59:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::numberBits = 8;

Fixed::Fixed():FixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed()
{
   std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout<<"Copy constructor called"<< std::endl;
    operator=(fixed);

}

int Fixed::getRawBits ( void )const
{
    std::cout << "getRawBits member function called" << std::endl;
    return FixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
    FixedPointNumber = raw;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    FixedPointNumber = other.getRawBits();
    return *this;
}