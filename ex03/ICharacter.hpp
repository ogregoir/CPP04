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

#define CHARACTER_HPP
#ifndef CHARACTER_HPP
#endif

# include <string>
# include <iostream>
# include "AMateria.hpp"

class   ICharacter : public AMateria
{
	protected :
		std::string name;
		AMateria*	inventory[4];
	public :
		ICharacter();
		ICharacter(const ICharacter &copy);
		ICharacter(std::string name);
		ICharacter &operator=(const ICharacter &copy);
		~ICharacter();
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
}

void	clearInventory(AMateria* &inventory);