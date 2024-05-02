/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:50 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/02 17:05:32 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

class Animal {
    
    protected :
    
        std::string type;
        
    public :
        Animal( void );
        Animal& operator=(const Animal &copy);
        Animal( std::string name );
        Animal(const Animal &copy);
        ~Animal( void );
};

#endif