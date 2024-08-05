/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:48:48 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 16:48:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
    private :

    public :
        WrongCat( void );
        WrongCat(const WrongCat &copy);
        WrongCat    operator=(const WrongCat &copy);
        void makeSound( void ) const;
        ~WrongCat();

};
