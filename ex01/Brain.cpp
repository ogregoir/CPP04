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
    int i = 0;
    if(&copy != this)
    {
        while (i < 100)
        {
            this->ideas[i] = copy.ideas[i];
            i++;
        }
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain&    Brain::operator=(const Brain &copy)
{
    int i = 0;
    if(&copy != this)
    {
        while (i < 100)
        {
            this->ideas[i] = copy.ideas[i];
            i++;
        }
    }
    std::cout << "Brain operator copy called" << std::endl;
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}