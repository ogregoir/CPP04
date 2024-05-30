/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:13:10 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:13:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
    std::cout << "Constructor AMateria called" << std::endl;
}

AMateria::AMateria(const AMateria &copy){
    std::cout << AMateria copy constructor called << std::endl;
    *this = copy;
}

AMateria::AMateria(std::string const & type){
    std::cout << "Constructor AMateria type called" << std::endl;
    this->type = type;
}

AMateria& AMateria::operator=(const AMateria &copy){
    std::cout << "Amateria copy assignement operator called" << std::endl;
    return(*this);
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called" << std::endl;
}
