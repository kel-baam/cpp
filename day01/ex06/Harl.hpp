/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:24 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 17:24:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    public:
      void harlList(int index);
    private:
        void hello();
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
       
        //int harlChoice(char *choice);
};