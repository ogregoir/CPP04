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
	while (i < 4)
	{
		materias[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	int	i = 0;
	std::cout << "MateriaSource copy constructor called" << std::endl;
	while(i < 4)
	{
		if(copy.materias[i] != NULL)
			materias[i] = copy.materias[i]->clone();
		else
			materias[i] = NULL;
		i++;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	int	i = 0;
	std::cout << "MateriaSource copy assignement operator called" << std::endl;
	if(this == &copy)
		return(*this);
	while(i < 4)
	{
		if(materias[i] != NULL)
			delete materias[i];
		if(copy.materias[i] != NULL)
			materias[i] = copy.materias[i] -> clone();
		else
			materias[i] = NULL;
		i++;
	}
	return(*this);
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	std::cout << "MateriaSource destructor called" << std::endl;
	while(i < 4)
	{
		delete materias[i];
		i++;
	}
}

void    MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	int verif = 0;

	while (i != 4)
	{
		if (materias[i] == NULL)
		{
			materias[i] = m;
			verif = 1;
			break ;
		}
		i++;
	}
	if (i != 4 && verif == 1)
		std::cout << "Materia " << m->getType() << " learned, the lesson is in the location : " << i << std::endl;
	else
		std::cout << "Materia " << m->getType() << "not initialized" << std::endl;

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	if (type.empty())
		return (NULL);
	while (i < 4)
	{
		if (materias[i] != NULL && materias[i]->getType() == type)
		{
			std::cout << "New materia : " << type << " created" << std::endl;
			return(materias[i]->clone());
		}
		i++;
	}
	std::cout << "Materia : " << type << " unknow." << std::endl;
	return(0);
}