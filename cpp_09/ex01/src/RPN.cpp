/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/11 10:11:29 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(void){}

RPN::RPN(RPN const & copy)
{
	*this = copy;
}

RPN &	RPN::operator=(RPN const & src)
{
	if (this != &src)
	{
		this->_stack = src._stack;
		this->_nbNumber = src._nbNumber;
		this->_nbSign = src._nbSign;
	}
	return (*this);
}

RPN::~RPN(void){}

void	RPN::fill_stack(char **av, std::stack<std::string> & stack)
{
	std::stringstream	ss(av[1]);
	std::stack<std::string> init_stack;
	std::string	str;
	char	del = ' ';

	while (std::getline(ss, str, del))
		init_stack.push(str);
	while (!init_stack.empty())
	{
		stack.push(init_stack.top());
		init_stack.pop();
	}
}

void	RPN::check_stack(std::stack<std::string> & stack)
{
	this->_nbNumber = 0;
	this->_nbSign = 0;
	std::stack<std::string> new_stack = stack;
	while (!new_stack.empty())
	{
		if (new_stack.top() != "-" && new_stack.top() != "+" && new_stack.top() != "/" && new_stack.top() != "*" && !std::isdigit(new_stack.top()[0]))
			throw(std::invalid_argument("Error: bad input => " + new_stack.top()));
		if (std::isdigit(new_stack.top()[0]) && (std::atoi(new_stack.top().c_str()) < 0 || std::atoi(new_stack.top().c_str()) >= 10))
			throw(std::invalid_argument("Error: bad input => " + new_stack.top()));
		if (new_stack.top() == "-" || new_stack.top() == "+" || new_stack.top() == "/" || new_stack.top() == "*")
			this->_nbSign++;
		else
			this->_nbNumber++;
		new_stack.pop();
		if (this->_nbNumber == this->_nbSign)
			throw(std::invalid_argument("Error: bad input."));
	}
	_nbNumber--;
	if (_nbNumber != _nbSign)
		throw(std::invalid_argument("Error: there is not the right numbers of sign is the input."));
}

double	which_sign(double &first, double &second, std::stack<std::string> & stack, std::stack<std::string> & temp_stack)
{
	while (1)
	{
		if (stack.top() == "+")
			return first + second;
		else if (stack.top() == "-")
			return first - second;
		else if (stack.top() == "*")
			return first * second;
		else if (stack.top() == "/")
		{
			if (second == 0)
				throw(std::invalid_argument("Error: cannot divide by 0."));
			return first / second;
		}
		else
		{
			std::stringstream	out;
			out << first;
			temp_stack.push(out.str());
			first = second;
			second = std::atoi(stack.top().c_str());
			stack.pop();
		}
	}
}

void	RPN::run_npm(std::stack<std::string> & stack)
{
	std::stack<std::string> temp_stack;

	double	first_nb, second_nb;
	while (stack.size() != 1)
	{
		first_nb = std::atoi(stack.top().c_str());
		stack.pop();
		second_nb = std::atoi(stack.top().c_str());
		stack.pop();
		std::stringstream out;
		out << which_sign(first_nb, second_nb, stack, temp_stack);
		stack.pop();
		std::string new_number = out.str();
		stack.push(new_number);
		if (!temp_stack.empty())
		{
			stack.push(temp_stack.top());
			temp_stack.pop();
		}
	}
}

std::stack<std::string> & RPN::getStack()
{
	return this->_stack;
}
