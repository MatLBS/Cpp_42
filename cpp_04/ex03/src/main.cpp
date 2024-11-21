/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:35:10 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/21 16:13:36 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "_______________________" << std::endl << "Test de la copie profonde :" << std::endl << std::endl;

	ICharacter* new_bob = new Character("new_bob");

	*new_bob = *bob;
	delete bob;

	me->use(0, *new_bob);
	me->use(1, *new_bob);

	std::cout << "_______________________" << std::endl << "Equipons trop de Materia :" << std::endl << std::endl;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;

	tmp1 = src->createMateria("ice");
	tmp2 = src->createMateria("cure");
	tmp3 = src->createMateria("bonjour");
	tmp3 = src->createMateria("ice");
	tmp4 = src->createMateria("cure");

	me->equip(tmp1);
	me->equip(tmp2);
	me->equip(tmp3);

	std::cout << "_______________________" << std::endl << "Déséquipons puis rééquipons une Materia :" << std::endl << std::endl;

	me->unequip(3);
	me->equip(tmp4);

	delete tmp2;
	delete new_bob;
	delete me;
	delete src;

	return (0);
}
