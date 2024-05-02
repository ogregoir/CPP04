/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:22:31 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/02 16:07:04 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <string>
# include <iostream>

class Cat  : public Animal {
    protected :
    public :
        Cat( void );
        Cat& operator=(const Cat &copy);
        Cat( std::string name );
        Cat(const Cat &copy);
        ~Cat( void );
    
}
#endif