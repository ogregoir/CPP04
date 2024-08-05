/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:23 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/05 16:19:18 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat  ( void ) : Animal()
{
	idea = new Brain();
    std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat& Cat::operator=(const Cat &copy)
{
	if (&copy != this && !copy.type.empty())
		this->type = copy.type;
	std::cout << "Cat copy assignement operator called" << std::endl;
	return(*this);
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat( void )
{
	delete idea;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}