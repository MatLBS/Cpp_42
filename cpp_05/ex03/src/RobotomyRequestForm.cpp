/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:26:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 12:29:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequest", R_SIGN_MIN, R_EXEC_MIN)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", R_SIGN_MIN, R_EXEC_MIN), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): AForm("RobotomyRequest", R_SIGN_MIN, R_EXEC_MIN), _target(copy._target + "_copy")
{
	*this = copy;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void)src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

void	RobotomyRequestForm::to_execute(void) const
{
	std::srand(std::time(0));
	int nb = std::rand();

	if (nb % 2 == 0)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << "Sorry but the robotomy failed for " << this->_target << std::endl;
}
