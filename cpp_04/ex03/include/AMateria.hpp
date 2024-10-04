/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:03:22 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 14:54:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <cstring>
# include "ICharacter.hpp"

class ICharacter ;

class AMateria {

protected:

	std::string	_type;

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	AMateria &	operator=(AMateria const & src);
	virtual ~AMateria(void);


	virtual std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif
