/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:38:31 by marvin            #+#    #+#             */
/*   Updated: 2024/05/30 15:38:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "AMateria.hpp"
#include  "ICharacter.hpp"

class	AMateria;

class   Character : public ICharacter
{
	protected :
		AMateria*	inventory[4];
		std::string name;

	public :
		Character();
		Character(const Character &copy);
		Character(std::string name);
		Character &operator=(const Character &copy);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		void	clearInventory(AMateria* *inventory);
};


