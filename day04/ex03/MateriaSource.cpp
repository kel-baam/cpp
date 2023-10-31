/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:24:50 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/31 17:26:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

 MateriaSource::MateriaSource()
{
    for(int i =0;i <4;i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    for(int i = 0; i < 4; i++)
    {
        if(obj.materias[i])
        {
         if(obj.materias[i]->getType() == "Cure")
         {
            materias[i] = new Cure();
            *materias[i] = *obj.materias[i];
         }
         else if (obj.materias[i]->getType() == "Ice")
            {
            materias[i] = new Ice();
                *materias[i] = *obj.materias[i];
            }
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    //delete the array
    for(int i = 0; i < 4; i++)
    {
        if(obj.materias[i])
        {
         if(obj.materias[i]->getType() == "Cure")
         {
            materias[i] = new Cure();
            *materias[i] = *obj.materias[i];
         }
         else if (obj.materias[i]->getType() == "Ice")
            {
            materias[i] = new Ice();
                *materias[i] = *obj.materias[i];
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* obj)
{
    (void)obj;
    
   for(int i = 0;i <4;i++)
   {
        if(materias[i] == NULL)
        {
            materias[i] = obj;
            break;
        }
   }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i =0; i < 4;i++)
        {
            if(type == materias[i]->getType())
                return materias[i];
        }
    return NULL;
}