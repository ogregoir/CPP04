/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:31 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:59:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain*  idea;
    public :
        Cat( void );
        Cat& operator=(const Cat &copy);
        Cat(const Cat &copy);
        void makeSound() const;
        ~Cat( void );
    
};
