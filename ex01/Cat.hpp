/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:31 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/04 19:23:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

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

#endif