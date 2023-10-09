/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:57:53 by kel-baam          #+#    #+#             */
/*   Updated: 2023/08/09 15:57:55 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include <string>

std::string ft_replace(std::string buff, std::string oldStr,std::string newStr,size_t pos)
{
    std::string tmp_buff;
    size_t i;
    size_t j;

    for(i = 0; i< buff.length(); i++)
    {
        if(pos != i)
            tmp_buff +=buff[i];
        else
            {
                for( j = 0 ; j < newStr.length() ; j++)
                    tmp_buff +=newStr[j];
                i += oldStr.length() - 1;
            }
    }
    return tmp_buff;
}

std::string ft_find_pos(std::string buff, std::string oldStr,std::string newStr)
{
    size_t pos;

    pos = buff.find(oldStr);
    while(pos != std::string::npos)
    {
        buff = ft_replace(buff,oldStr,newStr,pos);
        pos = buff.find(oldStr);
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
                    Myfile <<"\n";
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
