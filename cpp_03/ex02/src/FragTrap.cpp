/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:15:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 14:40:00 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	FragTrap::nb_High_Fives = 0;

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this-> _Attack_points = 30;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), _High_Fives(false)
{
	std::cout << "Parametric FragTrap constructor called for " << this->_name << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this-> _Attack_points = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & src)
{
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_Hit_points = src.getHit_points();
		this->_Energy_points = src.getEnergy_points();
		this->_Attack_points = src.getAttack_points();
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called for " << this->_name << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_High_Fives == false)
	{
		std::cout << "_____________________________" << std::endl << std::endl;
		std::cout << "Want to make an High Fives ?" << std::endl;
		std::cout << "With pleasure..." << std::endl;
		std::cout << "* MAKING AN HIGH FIVES *" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;
		this->_High_Fives = true;
		this->nb_High_Fives += 1;
	}
	else if (this->_High_Fives == true && this->nb_High_Fives < 2)
	{
		std::cout << "_____________________________" << std::endl << std::endl;
		std::cout << "Want to make an High Fives ?" << std::endl;
		std::cout << "But... we already did one ?" << std::endl;
		std::cout << "Yes, and ?" << std::endl;
		std::cout << "* MAKING AN HIGH FIVES *" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;
		this->nb_High_Fives += 1;
	}
	else
	{
		std::cout << "_____________________________" << std::endl << std::endl;
		std::cout << "Want to make an High Fives ?" << std::endl;
		std::cout << "Please can we stop making High Fives ?" << std::endl;
		std::cout << "Come on, this is the last one !" << std::endl;
		std::cout << "* MAKING AN HIGH FIVES *" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;
		this->nb_High_Fives += 1;
	}
	return ;
}


