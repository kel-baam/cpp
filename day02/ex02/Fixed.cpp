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
{
}

/* Copy constructor */

Fixed::Fixed(const Fixed& fixed)
{
    FixedPointNumber =  fixed.getRawBits();
}

int Fixed::getRawBits ( void )const
{
    // std::cout << "getRawBits member function called " << FixedPointNumber<< std::endl;
    return FixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
    Fixed::FixedPointNumber = raw;
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
    FixedPointNumber = other.getRawBits();
    return *this;
}
std::ostream &operator << (std::ostream& output, const Fixed& obj)
{
    std::cout<< obj.toFloat();
    return output;       
}

Fixed Fixed::operator*(const Fixed &obj)
{
    Fixed result(toFloat() * obj.toFloat());

    return  result;
}
Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed result(toFloat() / obj.toFloat())
    return result;
}
Fixed &Fixed::operator++()
{
    FixedPointNumber++;
    return *this;
}
// int  Fixed::operator!=(const Fixed &obj)
// {
//     if(getRawBits() == obj.getRawBits())
//         return 0;
//     else
//         return 1;
// }
Fixed Fixed::operator++(int)
{
    Fixed obj(*this);
    FixedPointNumber++;
    return obj;
}