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

#include "Character.hpp"

void	Character::clearInventory(AMateria* inventory[4])
{
	int i = 0;
	while(i < 4)
	{
		delete inventory[i];
		inventory[i] = NULL;
		i++;
	}
}

Character::Character() : name("Default")
{
	int	i = 0;
	std::cout << "Character default constructor called" << std::endl;
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &copy) : name(copy.name)
{
	int	i = 0;
	std::cout << "Character copy constructor called" << std::endl;
	this->name = copy.name;
	while(i < 4)
	{
		if(copy.inventory[i] != NULL)
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
		i++;
	}

}

Character::Character(std::string name) : name(name)
{
	int	i = 0;
	std::cout << "Character name constructor called" << std::endl;
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}

Character& Character::operator=(const Character &copy)
{
	int i = 0;
	std::cout << "Character copy assignement operator called" << std::endl;
	if (this != &copy)
	{
		clearInventory(inventory);
		name = copy.name;
		while(i < 4)
		{
			if(copy.inventory[i] != NULL)
				inventory[i] = copy.inventory[i]->clone();
			else
				inventory[i] = NULL;
			i++;
		}

	}
	return(*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	clearInventory(inventory);
}

std::string const &Character::getName() const 
{
	return(this->name);
}

void    Character::equip(AMateria* m) 
{
	int i = 0;

	if (m == NULL)
		return ;
	while (i < 4)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break ;
		}
		i++;
	}
	if (i != 4)
		std::cout << "Equipment " << m->getType() << ", equipped at the location : " << i << std::endl;
	else
		std::cout << "Too much equipment in inventory, equipment " << m->getType() << " could not be added." << std::endl;
}

void	Character::unequip(int idx) 
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index" << std::endl;
        return;
	}
	if (inventory[idx] == NULL)
	{
        std::cout << "No AMateria to unequip at slot " << idx << std::endl;
		return;
    }
	std::cout << "Equipment " << inventory[idx]->getType() << " unequip at the location : " << idx << std::endl;
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
	{
		std::cout << "No equipment at this location" << std::endl;
		return ;
	}
	std::cout << "BOOM, " << this->name << " attack " << target.getName() << " with " << inventory[idx]->getType() << std::endl;
	inventory[idx]->use(target);
}
