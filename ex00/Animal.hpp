/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:50 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/03 17:24:22 by ogregoir         ###   ########.fr       */
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
        ~Animal( void );
};

#endif