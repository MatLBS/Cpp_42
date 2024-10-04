/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:07:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 12:00:10 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"
#include "../include/AAnimal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"


int main(void)
{
	// AAnimal *test = new AAnimal();

	const AAnimal *a = new Dog();
	const Dog* j = new Dog();
	const Cat* i = new Cat();

	std::cout << a->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	a->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << "_____________________________" << std::endl << "Test copie profonde :" << std::endl << std::endl;

	Cat *new_cat = new Cat();

	*new_cat = *i;

	delete (j);
	delete (i);

	std::cout << new_cat->getType() << " " << std::endl;
	new_cat->makeSound();

	delete (new_cat);
	delete (a);

	return (0);
}
