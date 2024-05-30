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

Ice::Ice(void) : AMateria()
{
    std::cout << "Ice constructor called" << std::endl;
    this->type = ice;
}

Ice::Ice(const Ice &copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}

Ice& Ice::operator=(const Ice &copy)
{
    std::cout << "Ice copy assignement operator called" << std::endl;
    return(*this);
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice&   Ice::clone()
{
    return(AMateria::Amateria(this->type));
}