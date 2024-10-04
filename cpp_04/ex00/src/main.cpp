/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:07:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 17:27:09 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);

	std::cout << "__________________________________________________" << std::endl << std::endl;

	const Dog* dog = new Dog();
	Dog dog1;

	dog1 = *dog;

	delete (dog);
	dog1.makeSound();

	std::cout << "__________________________________________________" << std::endl << std::endl;

	Animal random = Animal();

	std::cout << random.getType() << std::endl;
	random.makeSound();
	random = Cat();
	std::cout << random.getType() << ": ";
	random.makeSound();

	std::cout << "__________________________________________________" << std::endl << std::endl;

	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* y = new WrongCat();

	std::cout << x->getType() << " " << std::endl;
	std::cout << y->getType() << " " << std::endl;

	x->makeSound();
	y->makeSound();

	delete (x);
	delete (y);

	return (0);
}
