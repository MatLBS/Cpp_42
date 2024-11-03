/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 15:45:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Enter : ./Bureaucart <first_grade> <second_grade>" << std::endl;
		return (0);
	}
	int	grade = std::atoi(av[1]);
	int grade2 = std::atoi(av[2]);
	try
	{
		Bureaucrat Yann("Yann", grade);
		std::cout << Yann << std::endl;
		Yann.demotion();
		std::cout << Yann << std::endl;
		Bureaucrat Dom("Dom", grade2);
		std::cout << Dom << std::endl;
		Dom.promotion();
		std::cout << Dom << std::endl;
	}
	catch(const  Bureaucrat::GradeTooHighException & e)
	{
		std::cout << "The grade is too high" << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "The grade is too low" << std::endl;
	}
	return (0);
}
