/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:26:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 19:30:01 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("default", R_SIGN_MIN, R_EXEC_MIN)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, R_SIGN_MIN, R_EXEC_MIN), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy)
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
