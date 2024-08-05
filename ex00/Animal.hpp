/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:50 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:46:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
