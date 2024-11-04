/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 10:57:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		std::cout << "Enter : ./Bureaucart <first_grade> <second_grade>" << std::endl;
// 		return (0);
// 	}
// 	int	grade = std::atoi(av[1]);
// 	int grade2 = std::atoi(av[2]);
// 	try
// 	{
// 		Bureaucrat Yann("Yann", grade);
// 		std::cout << Yann << std::endl;
// 		Yann.demotion();
// 		std::cout << Yann << std::endl;
// 		Bureaucrat Dom("Dom", grade2);
// 		std::cout << Dom << std::endl;
// 		Dom.promotion();
// 		std::cout << Dom << std::endl;
// 		ShrubberyCreationForm test("huge_forest");
// 		test.executed();
// 	}
// 	catch(const  Bureaucrat::GradeTooHighException & e)
// 	{
// 		std::cout << "The grade is too high" << std::endl;
// 	}
// 	catch(const Bureaucrat::GradeTooLowException & e)
// 	{
// 		std::cout << "The grade is too low" << std::endl;
// 	}
// 	return (0);
// }


int	main()
{
	Bureaucrat	thiery = Bureaucrat("Thiery", 3);
	Bureaucrat	thiery_copy = thiery;
	Bureaucrat	sophie = Bureaucrat("Sophie", 150);
	Bureaucrat	lou = Bureaucrat("Lou", 20);

	ShrubberyCreationForm	f1 = ShrubberyCreationForm("campus");
	RobotomyRequestForm		f2 = RobotomyRequestForm("a rat");
	PresidentialPardonForm	f3 = PresidentialPardonForm("Captain Sparrow");

	thiery.executeForm(f1);
	sophie.signForm(f1);
	thiery.signForm(f1);
	sophie.executeForm(f1);
	thiery.executeForm(f1);

	lou.signForm(f2);
	lou.executeForm(f2);

	lou.signForm(f3);
	lou.executeForm(f3);

	PresidentialPardonForm	f4 = f3;
	thiery.signForm(f4);
	thiery.executeForm(f4);
	return 0;
}
