/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:48:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 19:42:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(void): _name("Default"), _signed(false), _min_to_sign(MIN_GRADE), _min_to_exec(MIN_GRADE)
{}

Form::Form(std::string name, unsigned int min_sign, unsigned int min_exec): _name(name), _signed(false), _min_to_sign(min_sign), _min_to_exec(min_exec)
{
	testGrade();
}

Form::Form(Form const & copy)
{
	*this = copy;
}

Form &	Form::operator=(Form const & src)
{
	if (this != &src)
	{
		this->_min_to_exec = src.getExec();
		this->_min_to_sign = src.getSign();
	}
	return (*this);
}

Form::~Form(void)
{}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_signed);
}

int	Form::getSign() const
{
	return (this->_min_to_sign);
}

int	Form::getExec() const
{
	return (this->_min_to_exec);
}

void	Form::testGrade() const
{
	if (getSign() < MAX_GRADE || getExec() < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (getSign() > MIN_GRADE || getExec() > MIN_GRADE)
		throw Form::GradeTooLowException();
}

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_min_to_sign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream & o, Form const & i)
{
	o << i.getName() << ", min grade to sign: " << i.getSign() << ", min grade to exec: " << i.getExec() \
	<< " and the form is currently signed: " << i.getIsSigned();
	return (o);
}
