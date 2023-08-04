/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:54 by kel-baam          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:57 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>

void print_args(char **args)
{
    int i;

    i = 1;
    while(args[i])
    {
        if(i != 1)
            std::cout<<" ";      
        std::cout<<args[i];
        i++;
    }
}
int main(int ac ,char **av)
{
    if(ac > 1)
    {
        int i;
        int j;

        i = 1;
        while(ac > 1)
        {
            j = 0;
            while(av[i][j])
            {
                av[i][j]= toupper(av[i][j]);
                j++;
            }
            i++;
            ac--;
        }
        print_args(av);
    }
    else
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
}
// if a enter a number what will happen