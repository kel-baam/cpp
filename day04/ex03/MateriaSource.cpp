/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:24:50 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/02 12:53:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <queue>

MateriaSource::MateriaSource()
{
    for(int i =0;i <4;i++)
        materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(materia[i])
            delete(materia[i]);
    }
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    for(int i = 0; i < 4; i++)
    {
        materia[i] = materia[i]->clone();
        *materia[i] = *obj.materia[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    for(int i = 0; i < 4; i++)
    {
        if(materia[i])
            delete(materia[i]);  
    }
    for(int i = 0; i < 4; i++)
    {
       if( materia[i] == NULL)
       {
            materia[i] = materia[i]->clone();
            *materia[i] = *obj.materia[i];
       }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* obj)
{
    int i;
   for(i = 0;i < 4;i++)
   {
        if(materia[i] == NULL)
        {
            materia[i] = obj;
            break;
        }
   }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *newM;
    for(int i = 0; i < 4;i++)
    {
        if(type == materia[i]->getType())
        {
            newM = materia[i]->clone();
            return newM;
        }
    }

    return NULL;
}