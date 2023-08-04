#include <iostream>
#include <fstream>
#include <iostream>


void check_string(std::string buff,std::string s1,std::string s2)
{
    int i =0;
    int start=0;
    int j = 0;
    while(buff[i])
    {
        if(buff[i]==s1[])
        {

        }
    }
}
int main(int ac,char **av)
{
    if(ac == 4)
    {
        std::string buff;
        std::ifstream infile;
        infile.open(av[1]);
        while(infile.eof())
        {
            infile >> buff;
          //function 
        }
        std::cout << buff;
    }
    else
    std::cout << "arguments is not enough "<< std::endl;
}
