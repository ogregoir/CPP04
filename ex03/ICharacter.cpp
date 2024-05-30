/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:38:20 by marvin            #+#    #+#             */
/*   Updated: 2024/05/30 15:38:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

void	clearInventory(AMateria* &inventory)
{
	int i = 0;

	while(i < 4)
	{
		delete[inventory[i]];
		inventory[i] = nullptr;
		i++;
	}
}

ICharacter::ICharacter()
{
	int	i = 0;
	std::cout << "ICharacter default constructor called" << std::endl;
	while(i != 4)
	{
		inventory[i] = nullptr;
		i++;
	}
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	clearInventory(*this);
	*this = copy;

}

ICharacter::ICharacter(std::string name)
{
	std::cout << "ICharacter name constructor called" << std::endl;
	this->name = name;
}

ICharacter& ICharacter::operator=(const ICharacter &copy)
{
	std::cout << "ICharacter copy assignement operator called" << std::endl;
	return(*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
	clearInventory(*this);
}

std::string const & ICharacter::getName() const
{
	return(this->name);
}

void    ICharacter::equip(AMateria* m)
{
	int i = 0;

	if (m == nullptr)
		return ;
	while (inventory[i] && i < 4)
	{
		if (inventory[i].empty())
		{
			inventory[i] = m;
			break ;
		}
		i++;
	}
	if (i != 4)
		std::cout << "equipment = " << m->type << ", equipped at the location : " << i << std::endl;
	else
		std::cout << "too much equipment in inventory, equipment " << m->type << " could not be added." << std::endl;
}

void	ICharacter::unequip(int fdx)
{
	if (inventory[fdx].empty())
		return ;
	inventory[fdx] = nullptr;
	std::cout << "equipment " << inventory[fdx] << " unequip at the location : " << fdx << std::endl;
}

void	ICharacter::use(int idx, ICharacter& target)
{
	if (fdx < 0 || fdx > 3 || !inventory[idx])
	{
		std::cout << "No equipment at this location" << std::endl;
		return ;
	}
	std::cout "BOOM, " << this->name << " attack " << target.getName() << " with " << inventory[idx] << std::endl;
}

