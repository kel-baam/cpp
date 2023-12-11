/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:58:05 by kel-baam          #+#    #+#             */
/*   Updated: 2023/12/11 11:09:52 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <string> 
#include <cstdlib>
#include <iomanip> 
#include <limits>
ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
    operator=(obj);
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
    (void)obj;
    return (*this);
}

void convertToChar(std::string str)
{
    float num;

    std::cout<<"char    :  ";
    try
    {
        num = atof(str.c_str());
        if(str == "nan" || str =="+inf" || str =="-inf")
            throw  std::exception();
        if(num < 0 || num > 256)
            throw  std::exception();
        if(num >= 0 && num < 32)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout<< static_cast<char>(num) << std::endl;
    
    }
    catch(...)
    {
        std::cout <<"impossible"<< std::endl;
    }
}

void convertToInt(std::string str)
{
    float num;
    
    std::cout << "int     :  ";
    num = std::atof(str.c_str());
    
    if(str == "nan" || str =="+inf" || str =="-inf")
        std::cout <<"impossible"<< std::endl;
    else
        std::cout<< static_cast<int>(num) << std::endl;
}

void  setPrecision(std::string str)
{
    int count = 1;
    std::cout << std::fixed;
    size_t pos = str.find(".");
    if(str[str.length() - 1] == 'f' && pos != std::string::npos )
        count = str.length() - pos - 2;
    else if(pos != std::string::npos)
        count = str.length() - pos - 1;
    
    std::cout << std::setprecision(count);
}

void convertToFloat(std::string str)
{    
    float num;
   
    std::cout<<"float   :  ";
    num = std::atof(str.c_str());
    std::cout<<  num << "f" <<std ::endl;
}

void convertToDouble(std::string str)
{
    float num;
    std::cout<<"double  :  ";
  
    num = std::atof(str.c_str());
    std::cout<<   static_cast<double>(num) <<std ::endl;

}

void impossibleMsg()
{
    std::cout << "char     : impossible"<< std::endl;
    std::cout << "int    : impossible"<< std::endl;
    std::cout << "float     : impossible"<< std::endl;
    std::cout << "double     : impossible"<< std::endl;
    exit(1); 
}

void checkErrors(std::string str)
{
    int i = 1;
    int count = 0;
    int strLength = str.length() - 1;
    
    if(str == "nan" || str =="+inf" || str =="-inf")
        return;
    if(str[strLength] != 'f' && !isdigit(str[strLength]))
        impossibleMsg();
    if(str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
            impossibleMsg();
    while(str[i])
    {
        if(str[i] && i != strLength && (str[i] != '.' && !isdigit(str[i])))
            impossibleMsg();
        if(str[i-1] == '.')
            count++;
        i++;
    }
    if(count > 1)
        impossibleMsg();
}

void ScalarConverter::convert(std::string str)
{  
    checkErrors(str);
    setPrecision(str);
    convertToChar(str);
    convertToInt(str);
    convertToFloat(str);
    convertToDouble(str);
}
