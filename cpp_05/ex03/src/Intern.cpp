/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:36:46 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 15:45:50 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern &	Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

Intern::~Intern(void)
{}

AForm *	Intern::makeForm(std::string name, std::string target)
{
	if (name != "PresidentialPardon" && name != "RobotomyRequest" && name != "ShrubberyCreation")
	{
		std::cout << "The form " << name << " does not exist." << std::endl;
		return (NULL);
	}
	std::string tab[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	AForm * (Intern::*functptr[3])(std::string name, std::string target) = {
		&Intern::create_president,
		&Intern::create_robotomy,
		&Intern::create_shrubbery};
	for (int i = 0; i < 3; i++)
	{
		if (name == tab[i])
			return (this->*functptr[i])(name, target);
	}
	return (NULL);
}

AForm *	Intern::create_president(std::string name, std::string target)
{
	AForm *new_form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << name << std::endl;
	return (new_form);
}

AForm *	Intern::create_robotomy(std::string name, std::string target)
{
	AForm *new_form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << name << std::endl;
	return (new_form);
}

AForm *	Intern::create_shrubbery(std::string name, std::string target)
{
	AForm *new_form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << name << std::endl;
	return (new_form);
}
