/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:43:50 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:43:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria()
{
    std::cout << "Cure constructor called" << std::endl;
    this->type = cure;
}

Cure::Cure(const Cure &copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

Cure& Cure::opertaor=(const Cure &copy)
{
    std::cout << "Cure operator assignement copy called" << std::endl;
    return(*this);
}

Cure::~Cure( void )
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure&   Cure::Cure()
{
    return(AMateria::Amateria(this->type));
}