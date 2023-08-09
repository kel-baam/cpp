/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:58:22 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:58:24 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class Harl
{
    public:
      
      void complain( std::string level ); 
    private:
        void hello();
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};
