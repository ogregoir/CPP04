/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:01 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:59:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain* idea;
    public :
        Dog( void );
        Dog& operator=(const Dog &copy);
        Dog(const Dog &copy);
        void makeSound() const;
        ~Dog( void );
};

