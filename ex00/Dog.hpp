/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:01 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:47:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    private :
    
    public :
        Dog( void );
        Dog& operator=(const Dog &copy);
        Dog(const Dog &copy);
        virtual void makeSound() const;
        ~Dog( void );
};

