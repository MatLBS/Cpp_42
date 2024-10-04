/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:13:29 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 16:28:55 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {

public:

	Cure(void);
	Cure(Cure const & copy);
	Cure &	operator=(Cure const & src);
	~Cure(void);


	virtual std::string const & getType() const;

	Cure* clone() const;
	void use(ICharacter& target);

private:

	std::string	_type;

};

#endif
