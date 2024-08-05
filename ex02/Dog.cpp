/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:14 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/05 16:19:31 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog  ( void ) : Animal()
{
	idea = new Brain();
    std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog& Dog::operator=(const Dog &copy)
{
	if (&copy != this && !copy.type.empty())
		this->type = copy.type;
	std::cout << "Dog copy assignement operator called" << std::endl;
	return(*this);
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

void Dog::makeSound() const
{
	std::cout << "WOOOAF" << std::endl;
}

Dog::~Dog( void )
{
	delete idea;
	std::cout << "Dog destructor called" << std::endl;
}