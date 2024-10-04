/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 14:28:23 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _Hit_points(10), _Energy_points(10), _Attack_points(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_name = "default";
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _Hit_points(10), _Energy_points(10), _Attack_points(0)
{
	std::cout << "Parametric ClapTrap constructor called for " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "Copy assignment ClapTrap operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_Hit_points = src.getHit_points();
		this->_Energy_points = src.getEnergy_points();
		this->_Attack_points = src.getAttack_points();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called for " << this->_name << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHit_points(void) const
{
	return (this->_Hit_points);
}

unsigned int	ClapTrap::getEnergy_points(void) const
{
	return (this->_Energy_points);
}

unsigned int	ClapTrap::getAttack_points(void) const
{
	return (this->_Attack_points);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		this->_Energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing him " << this->_Attack_points << " points of damage !" << std::endl;
	}
	else if (this->_Hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough health point !" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy point !" << std::endl;
	return ;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_Hit_points)
		this->_Hit_points = 0;
	else
		this->_Hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damages and now has " << this->_Hit_points << " points of life !" << std::endl;
	return ;
}



void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		this->_Energy_points -= 1;
		this->_Hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " has been cured of " << amount << " life points and now has " << this->_Hit_points << std::endl;
	}
	else if (this->_Hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " does not have enough health point !" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy point !" << std::endl;
	return ;
}
