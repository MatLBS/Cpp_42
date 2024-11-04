/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 15:57:28 by matle-br         ###   ########.fr       */
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
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::promotion(void)
{
	this->_grade -= 1;
	testGrade();
	std::cout << this->getName() << " got a promotion." << std::endl;
}

void	Bureaucrat::demotion(void)
{
	this->_grade += 1;
	testGrade();
	std::cout << this->getName() << " got a demotion." << std::endl;
}

void	Bureaucrat::testGrade() const
{
	if (getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	if (getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const  AForm::GradeTooLowException & e)
	{
		std::cout << this->getName() << " couldn't signed " << form.getName() << " because the lowest grde to sign it is " << form.getSign() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed form: " << form.getName() << std::endl;
	}
	catch(const AForm::GradeTooLowException & e)
	{
		std::cout << this->_name << " can't execute form: " << form.getName() << " because " << e.what() << std::endl;
	}
	catch(const AForm::CantExecute & e)
	{
		std::cout << this->_name << " can't execute form: " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
