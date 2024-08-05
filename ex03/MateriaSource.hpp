/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:02:07 by marvin            #+#    #+#             */
/*   Updated: 2024/05/30 17:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource& operator=(const MateriaSource &copy);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

