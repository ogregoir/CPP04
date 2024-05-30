/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:42:53 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:42:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CURE_HPP
# ifndef CURE_HPP
# endif


#pragma once

# include "AMateria.hpp"

class   Cure : public AMateria
{
    protected :
        std::string const & type;
    public :
        Cure();
        Cure(const Cure &copy);
        Cure& operator=(const Cure &copy);
        ~Cure();

        Cure& clone();
}