/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:44:51 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 12:30:15 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <cstring>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(Cat const & copy);
		Cat &	operator=(Cat const & src);
		~Cat(void);

		Brain *	getBrain(void) const;

		virtual void	makeSound(void) const;

	private:

		Brain *_brain;
};

#endif
