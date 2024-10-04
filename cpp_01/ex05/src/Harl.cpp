/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:22:41 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 10:25:07 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = 0;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR",};

	void(Harl::*debug)(void) = &Harl::_debug;
	void(Harl::*info)(void) = &Harl::_info;
	void(Harl::*warning)(void) = &Harl::_warning;
	void(Harl::*error)(void) = &Harl::_error;

	void (Harl::*functptr[4])(void) = {debug, info, warning, error};

	while (i < 4)
	{
		if (level == tab[i])
			(this->*functptr[i])();
		i++;
	}
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
