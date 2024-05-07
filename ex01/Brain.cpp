/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:06:57 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 19:06:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
}

void    Brain::operator=(const Brain &copy)
{
    std::cout << "Brain operator copy called" << std::endl;
    (*this) = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}