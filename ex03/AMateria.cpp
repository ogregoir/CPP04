/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:13:10 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:13:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type) {
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria constructor type called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &copy){
	std::cout << "Amateria copy assignement operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return(*this);
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

