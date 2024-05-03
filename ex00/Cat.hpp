/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:31 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/03 17:23:44 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

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
        void makeSound() const;
        ~Cat( void );
    
};

#endif