/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:41:15 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/27 14:10:42 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main()
{
	MutantStack<int> myStack;
	myStack.push(5);
	myStack.push(17);
	std::cout << "top = " << myStack.top() << std::endl;
	myStack.pop();
	std::cout << "size = " << myStack.size() << std::endl;
	myStack.push(3);
	myStack.push(5);
	myStack.push(737);
	myStack.push(0);
	MutantStack<int>::iterator it = myStack.begin();
	MutantStack<int>::iterator ite = myStack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(myStack);
	std::cout << "______________________________________" << std::endl << std::endl;
	std::list<int> newStack;
	newStack.push_back(5);
	newStack.push_back(17);
	std::cout << "top = " << newStack.front() << std::endl;
	newStack.pop_front();
	std::cout << "size = " << newStack.size() << std::endl;
	newStack.push_back(3);
	newStack.push_back(5);
	newStack.push_back(737);
	newStack.push_back(0);
	std::list<int>::iterator it1 = newStack.begin();
	std::list<int>::iterator ite1 = newStack.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << "it1 = " << *it1 << std::endl;
		++it1;
	}
	return 0;
}



// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }
