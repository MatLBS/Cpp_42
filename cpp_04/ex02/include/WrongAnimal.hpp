/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:41:38 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/30 15:56:59 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstring>

class WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & copy);
	WrongAnimal &	operator=(WrongAnimal const & src);
	virtual ~WrongAnimal(void);

	std::string	getType(void) const;
	virtual void	makeSound(void) const;


protected:

	std::string	_type;
};

#endif
