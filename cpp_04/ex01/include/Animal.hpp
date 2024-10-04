/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:43:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 12:31:24 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstring>
# include "Brain.hpp"

class Animal {

public:

	Animal(void);
	Animal(Animal const & copy);
	Animal &	operator=(Animal const & src);
	virtual ~Animal(void);

	std::string	getType(void) const;
	virtual Brain *	getBrain(void) const;

	virtual void	makeSound(void) const;


protected:

	std::string	_type;
};

#endif
