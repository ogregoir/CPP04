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

#define MATERIASOURCE_HPP
# ifndef MATERIASOURCE_HPP
#endif

# include "AMateria.hpp"

class MateriaSource
{
    protected :
        AMateria*	materias[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource& operator=(const MateriaSource &copy);
        ~MateriaSource();
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
}
