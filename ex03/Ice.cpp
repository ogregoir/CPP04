/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:43:46 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:43:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &copy)
{
    std::cout << "Ice copy assignement operator called" << std::endl;
    if(this != &copy)
        this->type = copy.type;
    return(*this);
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    Ice *ice = new Ice;
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}