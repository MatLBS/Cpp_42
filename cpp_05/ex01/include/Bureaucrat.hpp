/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:55:41 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 19:43:11 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include "Form.hpp"

class Form;

class Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat & operator=(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat(std::string name, int garde);

	std::string		getName() const;
	unsigned int	getGrade() const;
	void			promotion();
	void			demotion();

	void			testGrade() const;
	void			signForm(Form & form);

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


private:

	const std::string	_name;
	unsigned int		_grade;

};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i);

#endif
