/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:44:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 14:59:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <cstring>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	public:

		Dog(void);
		Dog(Dog const & copy);
		Dog &	operator=(Dog const & src);
		~Dog(void);

		Brain *	getBrain(void) const ;

		virtual void	makeSound(void) const;

	private:

		Brain *_brain;
};

#endif
