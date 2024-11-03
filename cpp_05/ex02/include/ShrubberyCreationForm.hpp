/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:26:48 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/03 19:00:37 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# define S_SIGN_MIN 145
# define S_EXEC_MIN 137

class ShrubberyCreationForm : public AForm
{

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm(std::string target);
	virtual void	executed();

private:

	std::string	_target;

};

#endif
