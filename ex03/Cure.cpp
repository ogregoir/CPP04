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

class AMateria;

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &copy)
{
	std::cout << "Cure operator assignement copy called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return(*this);
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure *cure = new Cure;
	return(cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}