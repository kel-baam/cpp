#include "Harl.hpp"




void Harl::complain( std::string level)
{
    if(level == "DEBUG" )
        void debug( void );
    if(level == "INFO")
        void info( void );
    if(level == "WARNING" )
        void warning( void );
    if(level == "ERROR")
        void error( void );
}