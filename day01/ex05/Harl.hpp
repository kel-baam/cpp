/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:58:22 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/09 17:38:15 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
