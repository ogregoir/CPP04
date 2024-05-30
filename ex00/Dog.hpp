/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:01 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/04 18:55:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

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
        void makeSound() const;
        ~Dog( void );
};

#endif

