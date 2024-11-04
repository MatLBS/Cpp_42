/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 16:22:33 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

// int	main()
// {
// 	Bureaucrat	thiery = Bureaucrat("Thiery", 3);
// 	Bureaucrat	thiery_copy = thiery;
// 	Bureaucrat	sophie = Bureaucrat("Sophie", 150);
// 	Bureaucrat	lou = Bureaucrat("Lou", 20);

// 	ShrubberyCreationForm	f1 = ShrubberyCreationForm("campus");
// 	RobotomyRequestForm		f2 = RobotomyRequestForm("a rat");
// 	PresidentialPardonForm	f3 = PresidentialPardonForm("Captain Sparrow");

// 	thiery.executeForm(f1);
// 	sophie.signForm(f1);
// 	thiery.signForm(f1);
// 	sophie.executeForm(f1);
// 	thiery.executeForm(f1);

// 	lou.signForm(f2);
// 	lou.executeForm(f2);

// 	lou.signForm(f3);
// 	lou.executeForm(f3);

// 	PresidentialPardonForm	f4 = f3;
// 	thiery.signForm(f4);
// 	thiery.executeForm(f4);
// 	return 0;
// }

int	main()
{
	Bureaucrat	thiery = Bureaucrat("Thiery", 3);
	Bureaucrat	thiery_copy = thiery;
	Bureaucrat	sophie = Bureaucrat("Sophie", 150);
	Bureaucrat	lou = Bureaucrat("Lou", 20);

	Intern		claireDespagneSlave = Intern();

	AForm	*f1 = claireDespagneSlave.makeForm("ShrubberyCreation", "campus");
	AForm	*f2 = claireDespagneSlave.makeForm("RobotomyRequest", "a rat");
	AForm	*f3 = claireDespagneSlave.makeForm("PresidentialPardon", "Captain Sparrow");
	claireDespagneSlave.makeForm("censor", "Claire Despagne");

	thiery.executeForm(*f1);
	sophie.signForm(*f1);
	thiery.signForm(*f1);
	sophie.executeForm(*f1);
	thiery.executeForm(*f1);

	lou.signForm(*f2);
	lou.executeForm(*f2);

	lou.signForm(*f3);
	lou.executeForm(*f3);
	thiery.executeForm(*f3);

	delete f1;
	delete f2;
	delete f3;

	return 0;
}

