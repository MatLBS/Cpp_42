/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:52:37 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:30:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this-> _Attack_points = 20;
	this->_gateKeeper = false;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _gateKeeper(false)
{
	std::cout << "Parametric ScavTrap constructor called for " << this->_name << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this-> _Attack_points = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_Hit_points = src.getHit_points();
		this->_Energy_points = src.getEnergy_points();
		this->_Attack_points = src.getAttack_points();
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called for " << this->_name << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
	if (this->_gateKeeper == false)
	{
		std::cout<< this->_name << " is now in Gate keeper mode" << std::endl;
		this->_gateKeeper = true;
	}
	else
		std::cout<< this->_name << " is already in Gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		this->_Energy_points -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing him " << this->_Attack_points << " points of damage !" << std::endl;
	}
	else if (this->_Hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " does not have enough health point !" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " does not have enough energy point !" << std::endl;
	return ;
}
