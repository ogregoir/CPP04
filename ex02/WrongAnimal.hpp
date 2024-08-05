/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:49:16 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 16:49:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class   WrongAnimal {
    protected :
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal operator=(const WrongAnimal &copy);
        std::string getType() const;
        virtual ~WrongAnimal();
        virtual void makeSound() const;
};
