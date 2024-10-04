/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:07:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 11:55:54 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	int	i;
	int	nb;
	Animal *tab[100];

	i = 0;
	nb = 10;
	while (i < nb)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		tab[i]->makeSound();
		i++;
	}
	for (int i = 0; i < nb; i++)
		tab[i]->getBrain()->setIdea(i, "chocolat");

	for (int i = 0; i < nb; i++)
		std::cout << tab[i]->getBrain()->getIdea(i) << std::endl;

	for (int i = 0; i < nb; i++)
	{
		if (i % 2 == 0)
			tab[i]->getBrain()->setIdea(0, "manger");
		else
			tab[i]->getBrain()->setIdea(0, "dormir");
	}

	for (int i = 0; i < nb; i++)
		std::cout << tab[i]->getBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < nb; i++)
		delete (tab[i]);

	std::cout << "_____________________________" << std::endl << "Test copie profonde :" << std::endl << std::endl;
	Dog *dog = new Dog();

	dog->makeSound();
	dog->getBrain()->setIdea(0, "j'aime le chocolat");

	Dog *bill = new Dog();

	*bill = *dog;

	delete (dog);
	bill->makeSound();
	std::cout << bill->getBrain()->getIdea(0) << std::endl;
	delete (bill);
	return (0);
}
