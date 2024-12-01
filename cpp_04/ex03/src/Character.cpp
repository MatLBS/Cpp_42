/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:26:21 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/29 16:33:14 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string const & name): _name(name)
{
	// std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < this->_size; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & copy)
{
	// std::cout << "Copy Character constructor called" << std::endl;
	*this = copy;
}

Character &	Character::operator=(Character const & src)
{
	// std::cout << "Copy assignment Character operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		for (int i = 0; i < this->_size; i++)
		{
			if (this->_inventory[i])
				delete (this->_inventory[i]);
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character(void)
{
	// std::cout << "Default Character destructor called" << std::endl;
	for (int i = 0; i < this->_size; i++)
		if (this->_inventory[i])
			delete (this->_inventory[i]);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < this->_size; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " was equiped !" << std::endl;
			return;
		}
	}
	std::cout << this->_name << " can not equip " << m->getType() << " because inventory is full !" << std::endl;
	delete (m);
}

void	Character::unequip(int index)
{
	if (index > 0 && index < this->_size)
	{
		std::cout << this->_inventory[index]->getType() << " has been unequip !" << std::endl;
		this->_inventory[index] = NULL;
	}
}

void	Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < this->_size && this->_inventory[index])
		this->_inventory[index]->use(target);
}
