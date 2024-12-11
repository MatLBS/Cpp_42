/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:52 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/04 09:56:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

#define MAX_VAL 750

// int	main(void)
// {
// 	Array<int>	intArr = Array<int>(5);
// 	try
// 	{
// 		intArr[4] = 5;
// 		std::cout << intArr[4] << std::endl;
// 	}
// 	catch(const Array<int>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	Array<float>	floatArr = Array<float>(10);
// 	try
// 	{
// 		floatArr[4] = 42.42;
// 		std::cout << floatArr[4] << std::endl;
// 	}
// 	catch(const Array<float>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << floatArr[12] << std::endl;
// 	}
// 	catch(const Array<float>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	Array<>	Arr = Array<>(12);
// 	try
// 	{
// 		std::cout << Arr[4] << std::endl;
// 	}
// 	catch(const Array<>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << Arr[12] << std::endl;
// 	}
// 	catch(const Array<>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	const Array<> newArr = Arr;
// 	Arr = Array<>(20);
// 	try
// 	{
// 		std::cout << Arr[12] << std::endl;
// 	}
// 	catch(const Array<>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << newArr[12] << std::endl;
// 	}
// 	catch(const Array<>::IndexOutOfBounds & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }


int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}
