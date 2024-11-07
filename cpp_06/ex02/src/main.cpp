/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:52:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/07 18:32:42 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include "../include/Base.hpp"

Base * generate(void)
{
	switch(rand()%3 + 1)
	{
		case 1:
				return(new A());
		case 2:
				return(new B());
		case 3:
				return(new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) == NULL){
		if (dynamic_cast<B *> (p) == NULL){
			if (dynamic_cast<C *>(p) == NULL)
				std::cout << "No type find." << std::endl;
			else
				std::cout << "C'est un C !" << std::endl;}
		else
			std::cout << "C'est un B !" << std::endl;}
	else
		std::cout << "C'est un A !" <<std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "C'est un A !" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "C'est un B !" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C'est un C !" << std::endl;
		return ;
	}
	catch (...) {}
}

int	main(void)
{
	std::srand((unsigned int)time(NULL));
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}
