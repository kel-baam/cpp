#include <iostream>
#include <fstream>


//find the target string then replace it whit new string //done
//creat a new file //done
//copie the data the new file
void replaceFunction(std::string *buff, std::string oldStr,std::string newStr)
{
    size_t  pos;
    pos=buff->find(oldStr);
    while(pos != buff->npos)
    {
        buff->replace(pos,oldStr.length(),newStr);
        pos=buff->find(oldStr);
    }
}

int main(int ac,char **av)
{
    if(ac == 4)
    {
        std::string buff;
        int start = 0;
        std::string newFileName;
        newFileName = "New";
        std::ifstream infile;
       
        infile.open(av[1]);
        if(infile)
        { 
            std::ofstream Myfile(newFileName + av[1]);
            while(std::getline(infile,buff))
            {  
                if(start !=0)
                    Myfile<<"\n";
                replaceFunction(&buff,av[2],av[3]);
                Myfile<< buff;
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
