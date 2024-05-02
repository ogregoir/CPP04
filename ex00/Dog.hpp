/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:01 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/02 16:07:30 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <string>
# include <iostream>

class Dog : public Animal {
    protected :
    public :
        Dog( void );
        Dog& operator=(const Dog &copy);
        Dog( std::string name );
        Dog(const Dog &copy);
        ~Dog( void );
}
#endif

