/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:29:41 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 11:39:32 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

MateriaSource::MateriaSource(void)
{
	// std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < this->_size; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	// std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = copy;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & src)
{
	// std::cout << "Copy assignment MateriaSource operator called" << std::endl;
	if (this != &src)
	{
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

MateriaSource::~MateriaSource(void)
{
	// std::cout << "Default MateriaSource destructor called" << std::endl;
	for (int i = 0; i < this->_size; i++)
		if (this->_inventory[i])
			delete (this->_inventory[i]);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < this->_size; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "MateriaSource is learning " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Materia can not equip " << m->getType() << " because inventory is full !" << std::endl;
	delete (m);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_size; i++)
	{
		if (this->_inventory[i] != NULL && (this->_inventory[i]->getType() == type))
			return (this->_inventory[i]->clone());
	}
	std::cout << "Type is unknown." << std::endl;
	return (NULL);
}
