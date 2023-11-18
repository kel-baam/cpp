/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:58:05 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/17 15:45:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <string> 
#include <cstdlib>

ScalarConverter:: ScalarConverter()
{

}

int checkType(std::string arg)
{
    int i = 0;
    int isPoint = 0;
    if(arg == "nan" || arg=="+inf" || arg=="-inf")
        return -1;
    while(isdigit(arg[i]) || arg[i] == '.')
    {
        
        if(arg[i] == '.')
            isPoint = 1;
            i++;
    }
    if(isPoint)
    {
        if(arg[i] == 'f')
            return 1;
        return 2;
    }
    return 0;
    
} 

void convertToInt(std::string str)
{
    int num ;
    try
    {
        num = stoi(str); 
        if(num >= 32 && num <= 127)
            std::cout<< "char         : " << static_cast<char>(num)<< std::endl;
        else 
            std::cout<< "char         : Non displayable" << std::endl;
        std::cout<< "int          : "<< num << std::endl;
        std::cout<< "float        : "<< static_cast<float>(num)<<".0f"<< std::endl;//.0f
        std::cout<< "double       : "<< static_cast<double>(num) <<".0" <<std::endl;
    }
    catch(std::out_of_range&)
    {
        std::cout << "Out of range .\n";
    }
    catch(std::invalid_argument&)
    {
        std::cout << "invalid argument \n" << std::endl;
    }
   
}

void convertToFloat(std::string str)
{
    float num = stof(str);

    try
    {
        if(num >= 32 && num <= 127)
            std::cout<< "char        : " << static_cast<char>(num)<< std::endl;
        else
            std::cout<< "char        : Non displayable" << std::endl;
        std::cout<< "int         : "<< static_cast<int>(num) << std::endl;
        std::cout<< "float       : "<< num  << "f" <<std ::endl;//.0f
        std::cout<< "double      : "<< static_cast<double>(num) << std::endl;
    }
    catch(std::out_of_range&)
    {
        std::cout << "Out of range\n"<< std::endl;
    }
}
    

void convertToDouble(std::string str)
{
    double num = stod(str);
    try
    {
        if(num >= 32 && num <= 127)
            std::cout<< "char       : " << static_cast<char>(num)<< std::endl;
        else
            std::cout<< "char       : Non displayable" << std::endl;
        std::cout<< "int        : "<< static_cast<int>(num) << std::endl;
        std::cout<< "float      : "<< static_cast<float>(num)<<"f"<< std::endl;//.0f
        std::cout<< "double     : "<< num << std::endl;
    }
    catch(std::out_of_range&)
    {
        std::cout << "Out of range\n"<< std::endl;
    }
}

void limitHandel(std::string str)
{
    std::cout<< "char       : impossible" << std::endl;
    std::cout<< "int        : impossible"<< std::endl;
    std::cout<< "float      : "<< str <<"f"<< std::endl;//.0f
    std::cout<< "double     : "<< str << std::endl;
}
void convertArg(float arg)
{
    std::cout << arg << std::endl;
}

void ScalarConverter::convert(std::string str)
{  
     int type;
    //nane inf 
    type = checkType(str);
    std::cout << type << std::endl;
    if(type == -1)
        limitHandel(str);
    if(type == 1)
        convertToFloat(str);
    if(type == 0)
        convertToInt(str);
    if(type == 2)
        convertToDouble(str);
}
