/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:24:47 by kel-baam          #+#    #+#             */
/*   Updated: 2023/11/01 15:23:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
