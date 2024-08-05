/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:49:19 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 16:49:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    (*this) = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal    WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (&copy != this && !copy.type.empty())
		this->type = copy.type;
    std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	return(*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WRONGANIMAL" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}