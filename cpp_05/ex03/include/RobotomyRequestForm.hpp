/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:26:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 10:42:07 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# define R_SIGN_MIN 72
# define R_EXEC_MIN 45

class RobotomyRequestForm : public AForm
{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm(std::string target);
	virtual void	to_execute() const;

private:

	std::string	_target;

};

#endif
