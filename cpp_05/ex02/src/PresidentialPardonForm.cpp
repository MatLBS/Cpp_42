/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:58:08 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 12:29:36 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardon", P_SIGN_MIN, P_EXEC_MIN)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", P_SIGN_MIN, P_EXEC_MIN), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): AForm("PresidentialPardon", P_SIGN_MIN, P_EXEC_MIN), _target(copy._target + "_copy")
{
	*this = copy;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void) src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

void	PresidentialPardonForm::to_execute(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
