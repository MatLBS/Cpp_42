/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 15:21:57 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

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
		Form test("Cerfa 80", -3, 75);
		std::cout << test << std::endl;
		Yann.signForm(test);
	}
	catch(const  Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
