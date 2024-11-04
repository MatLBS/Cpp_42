/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:58:00 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 10:43:36 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

# define P_SIGN_MIN 25
# define P_EXEC_MIN 5

class PresidentialPardonForm : public AForm
{

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm(std::string target);
	virtual void	to_execute() const;

private:

	std::string	_target;

};

#endif
