/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:31 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:47:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
    private :
    
    public :
        Cat( void );
        Cat& operator=(const Cat &copy);
        Cat(const Cat &copy);
        virtual void makeSound() const;
        ~Cat( void );
    
};
