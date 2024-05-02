/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:23 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/02 17:19:04 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat  ( void ) : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	return(*this);
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::Cat( std::string name ) : Animal(name)
{
    std::cout << "Cat name constructor called" << std::endl;
    this->type = name;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}