/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:13:20 by marvin            #+#    #+#             */
/*   Updated: 2024/05/28 17:13:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define AMATERIA_H
# ifndef AMATERIA_H
# endif

#pragma once

# include <ctype>
# include <iostream>
# include <string >

class AMateria
{
	protected:
		std::string const & type;
	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria& operator=(const AMateria &copy);
		AMateria(const AMateria &copy);
		~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
