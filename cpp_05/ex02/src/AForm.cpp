/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:48:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 17:42:55 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(void): _name("Default"), _signed(false), _min_to_sign(MIN_GRADE), _min_to_exec(MIN_GRADE)
{}

AForm::AForm(std::string name, unsigned int min_sign, unsigned int min_exec): _name(name), _signed(false), _min_to_sign(min_sign), _min_to_exec(min_exec)
{
	testGrade();
}

AForm::AForm(AForm const & copy)
{
	*this = copy;
}

AForm &	AForm::operator=(AForm const & src)
{
	if (this != &src)
	{
		this->_min_to_exec = src.getExec();
		this->_min_to_sign = src.getSign();
	}
	return (*this);
}

AForm::~AForm(void)
{}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_signed);
}

int	AForm::getSign() const
{
	return (this->_min_to_sign);
}

int	AForm::getExec() const
{
	return (this->_min_to_exec);
}

void	AForm::testGrade() const
{
	if (getSign() < MAX_GRADE || getExec() < MAX_GRADE)
		throw AForm::GradeTooHighException();
	if (getSign() > MIN_GRADE || getExec() > MIN_GRADE)
		throw AForm::GradeTooLowException();
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_min_to_sign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream & o, AForm const & i)
{
	o << i.getName() << ", min grade to sign: " << i.getSign() << ", min grade to exec: " << i.getExec() \
	<< " and the form is currently signed: " << i.getIsSigned();
	return (o);
}
