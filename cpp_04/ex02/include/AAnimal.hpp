/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:43:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 14:58:43 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <cstring>
# include "Brain.hpp"

class AAnimal {

public:

	AAnimal(void);
	AAnimal(AAnimal const & copy);
	AAnimal &	operator=(AAnimal const & src);
	virtual ~AAnimal(void);

	std::string	getType(void) const;
	virtual Brain *	getBrain(void) const;

	virtual void	makeSound(void) const = 0;


protected:

	std::string	_type;
};

#endif
