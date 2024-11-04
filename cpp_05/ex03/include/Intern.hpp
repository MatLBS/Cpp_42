/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:36:49 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 15:35:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(Intern const & copy);
	Intern & operator=(Intern const & src);
	~Intern(void);

	AForm *	makeForm(std::string name, std::string target);

private:

	AForm *	create_president(std::string name, std::string target);
	AForm *	create_robotomy(std::string name, std::string target);
	AForm *	create_shrubbery(std::string name, std::string target);


};

#endif
