/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:08:09 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/15 13:08:10 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed 
{
    private:
        int  FixedPointNumber;
        static const int  numberBits;

    public:
        Fixed();
        Fixed(Fixed &initNumber);
        ~Fixed();
        Fixed &operator=(const Fixed& other);
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};

#endif

