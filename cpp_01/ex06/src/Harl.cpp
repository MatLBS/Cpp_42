/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:58:35 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 09:42:56 by matle-br         ###   ########.fr       */
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
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
				(this->*functptr[0])();
		case 1:
				(this->*functptr[1])();
		case 2:
				(this->*functptr[2])();
		case 3:
				(this->*functptr[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
	return ;
}
