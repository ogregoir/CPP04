/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:01:14 by marvin            #+#    #+#             */
/*   Updated: 2024/05/30 17:01:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;

    std::cout << "MateriaSource default constructor called" << std::endl;
    while (i != 4)
    {
        materias[i] = nullptr;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy assignement operator called" << std::endl;
    return(*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria*)
{
    int i = 0;
    int verif = 0;

    while (i != 4)
    {
        if (materias[i] == nullptr)
        {
            materias[i] = &Amateria;
            verif = 1;
            break ;
        }
        i++;
    }
    if (i != 4 && verif == 1)
        std::cout << "Materia : " << AMateria->type << " learned, " << " the lesson is in the location." << i << std::endl;
    else
        std::cout << "Materia : " << AMateria->type << "not initialized" << std::endl;

}

Amateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;

    if (type.empty())
        return ;
    while (materias[i] && i != 4)
    {
        if (materias[i]->type == type)
        {
            std::cout << "New materia : " << type << " created" << std::endl;
            AMateria* newmateria;
            newmateria = new AMateria();
            newmateria = AMateria(type);
            return(newmateria);
        }
        i++;
    }
    if (i == 4)
    {
        std::cout << "Materia : " << type << " unknow." << std::endl;
        return(0);
    }
}