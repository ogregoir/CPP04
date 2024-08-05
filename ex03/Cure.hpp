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

#pragma once

#include "AMateria.hpp"

class   Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &copy);
		Cure& operator=(const Cure &copy);
		virtual ~Cure();

		virtual AMateria* clone() const;
    	virtual void use(ICharacter& target);
};