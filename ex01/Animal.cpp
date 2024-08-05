/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:11:06 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:50:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal  ( void )
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
	if (&copy != this && !copy.type.empty())
		this->type = copy.type;
	std::cout << "Animal copy assignement operator called" << std::endl;
	return(*this);
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::Animal( std::string name )
{
    std::cout << "Animal name constructor called" << std::endl;
    this->type = name;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

void Animal::makeSound() const
{
	
}