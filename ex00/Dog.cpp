/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:14 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/02 17:09:10 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog  ( void )
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	return(*this);
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::Dog( std::string name )
{
    std::cout << "Dog name constructor called" << std::endl;
    this->type = name;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}