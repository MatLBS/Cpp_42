/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:33:11 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:42:14 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_Hit_points = this->FragTrap::_Hit_points;
	this->_Energy_points = this->ScavTrap::_Energy_points;
	this->_Attack_points = this->FragTrap::_Attack_points;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "Parametric DiamondTrap constructor called for " << name << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_points = FragTrap::_Attack_points;
	this->_name = name;

	// std::cout << "Hit_points = " << this->_Hit_points << std::endl;
	// std::cout << "Energy_points = " << this->_Energy_points << std::endl;
	// std::cout << "attack_damages = " << this->_Attack_points << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = copy;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & src)
{
	std::cout << "Copy assignment DiamondTrap operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName_Diamond();
		this->_Hit_points = src.getHit_points();
		this->_Energy_points = src.getEnergy_points();
		this->_Attack_points = src.getAttack_points();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called for " << this->_name << std::endl;
	return ;
}

std::string	DiamondTrap::getName_Diamond(void) const
{
	return (this->_name);
}

void	DiamondTrap::attack(const std::string & target)
{
	return (ScavTrap::attack(target));
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is : " << this->_name << std::endl;
	std::cout << "And my ClapTrap name is : " << this->ClapTrap::_name << std::endl;

}
