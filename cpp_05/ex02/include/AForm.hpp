/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:31:21 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 15:57:08 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <ctime>
# include "Bureaucrat.hpp"

# define MIN_GRADE 150
# define MAX_GRADE 1

class Bureaucrat;

class AForm {

public:

	AForm(void);
	AForm(AForm const & copy);
	AForm & operator=(AForm const & src);
	~AForm(void);

	AForm(std::string name, unsigned int min_sign, unsigned int min_exec);
	void			beSigned(Bureaucrat const & bureaucrat);
	void			testGrade() const;
	virtual	void	to_execute() const = 0;
	void			execute(Bureaucrat const & executor) const;

	std::string	getName() const;
	bool			getIsSigned() const;
	unsigned int	getSign() const;
	unsigned int	getExec() const;


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low");
			}
	};

	class CantExecute : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form is not signed");
			}
	};

protected:

	const std::string	_name;
	bool				_signed;
	unsigned int		_min_to_sign;
	unsigned int		_min_to_exec;

};

std::ostream &operator<<(std::ostream & o, AForm const & i);


#endif
