/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:57:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/13 10:32:08 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string ft_replace(std::string buff, std::string oldStr,std::string newStr,size_t pos,size_t *starPos)
{
    std::string tmp_buff;
    size_t i;
    size_t j;
    pos += *starPos;
    for(i = 0; i< buff.length(); i++)
    {
        if(pos != i)
            tmp_buff +=buff[i];
        else
            {
                for( j = 0 ; j < newStr.length() ; j++)
                    tmp_buff +=newStr[j];
                *starPos = i + newStr.length();
                i += oldStr.length() - 1;
            }
    }
    return tmp_buff;
}

std::string ft_find_pos(std::string buff, std::string oldStr,std::string newStr)
{
    size_t pos;
    std::string tmp_buff;
    size_t starPos;
    
    starPos = 0;
    pos = buff.find(oldStr);
    if(oldStr == "")
        pos = std::string::npos;
    while(pos != std::string::npos)
    {
        buff = ft_replace(buff,oldStr,newStr,pos,&starPos);
        tmp_buff = buff.substr(starPos);
        pos = tmp_buff.find(oldStr);
    }
    return buff;
}

int main(int ac,char **av)
{
    if(ac == 4)
    {
        std::string buff;
        std::string newFileName;
        std::ifstream infile;
        std::ofstream Myfile;
        int start;
       
        newFileName = "New";
        start = 0;
        infile.open(av[1]);
        if(infile)
        { 
            std::ofstream Myfile((newFileName + av[1]).c_str());
            while(std::getline(infile,buff))
            {  
                if(start !=0)
                    Myfile << "\n";
                buff = ft_find_pos(buff,av[2],av[3]);
                Myfile << buff;
                start++;
            }
            infile.close();
            Myfile.close();
        }
        else
            std::cout<<"Error in opening file!!!";
    }
    else
    std::cout << "arguments is not enough "<< std::endl;
}
