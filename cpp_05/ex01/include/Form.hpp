/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:31:21 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 15:21:37 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include "Bureaucrat.hpp"

# define MIN_GRADE 150
# define MAX_GRADE 1

class Bureaucrat;

class Form {

public:

	Form(void);
	Form(Form const & copy);
	Form & operator=(Form const & src);
	~Form(void);

	Form(std::string name, unsigned int min_sign, unsigned int min_exec);
	void	beSigned(Bureaucrat & bureaucrat);
	void	testGrade() const;

	std::string	getName() const;
	bool			getIsSigned() const;
	unsigned int	getSign() const;
	unsigned int	getExec() const;


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade to sign the form is too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade to sign the form is too low");
			}
	};

private:

	const std::string	_name;
	bool				_signed;
	const unsigned int		_min_to_sign;
	const unsigned int		_min_to_exec;

};

std::ostream &operator<<(std::ostream & o, Form const & i);


#endif
