/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:50 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/04 18:55:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
    protected :
    
        std::string type;
        
        
    public :
        Animal( void );
        Animal& operator=(const Animal &copy);
        Animal( std::string name );
        Animal(const Animal &copy);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal( void );
};

#endif