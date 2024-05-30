/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:43:24 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:43:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ICE_HPP
# ifndef ICE_HPP
#endif

#pragma once

# include "AMateria.hpp" 

class   Ice : public AMateria
{
    private :
        std::string const & type;
    public :
        Ice();
        Ice(const Ice &copy);
        Ice& operator=(const Ice &copy);
        ~Ice();

        Ice& clone();
}