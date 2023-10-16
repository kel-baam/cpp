
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
        Fixed operator*(const Fixed &obj);
        Fixed Fixed::operator*(const Fixed &obj);
        int getRawBits( void ) const; 
        Fixed& operator++();
        Fixed operator++(int);
};
std::ostream &operator<<(std::ostream& output,const Fixed& obj);


#endif