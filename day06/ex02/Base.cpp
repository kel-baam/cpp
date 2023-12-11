/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:59:05 by kel-baam          #+#    #+#             */
/*   Updated: 2023/12/10 11:02:52 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"


Base::~Base()
{
    
}
Base * generate(void)
{
    int choice;
    
    srand(time(0));
    choice = rand() % 3;
    if(choice == 0)
        return new A();
    else if(choice == 1)
        return new B();
    return new C();
}

void identify(Base* p)
{
   A *a = dynamic_cast<A*>(p);
   B *b = dynamic_cast<B*>(p);
   C *c =  dynamic_cast<C*>(p);
    
    if(a)
       a->TypeA();
    else if(b)
        b->TypeB();
    else if(c)
       c->TypeC();
    else
        std::cout << "please check type again\n";
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
         a.TypeA();
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            b.TypeB();
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c =  dynamic_cast<C&>(p);
                    c.TypeC();
            }  
            catch(const std::exception& e)
            {
                std::cout << " it is  another type \n";
            }
        }
    }
}
    
