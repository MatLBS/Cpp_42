/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/01 17:33:26 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	testGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	*this = copy;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
		this->_name = src.getName();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::promotion(void)
{
	this->_grade -= 1;
	testGrade();
}

void	Bureaucrat::demotion(void)
{
	this->_grade += 1;
	testGrade();
}

void	Bureaucrat::testGrade() const
{
	if (getGrade() < 1)
		throw GradeTooHighException();
	if (getGrade() > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getGrade();
	return (o);
}
