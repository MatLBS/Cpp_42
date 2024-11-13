/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:05 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/13 11:54:12 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

template <typename T>
void	print_type(T &type)
{
	std::cout << type << " ";
}

template <typename T>
void	add_two(T &type)
{
	std::cout << type << " ";
	type += 2;
}

int	main(void)
{
	char str[10] = "bonjour";
	iter(str, (int)(strlen(str)), print_type);

	int	nb[5] = {14, 5, 42, 40, 1};
	iter(nb, 5, add_two);
	iter(nb, 5, print_type);

	float	f[4] = {1.5, 54.98, 42.42, 24.74};
	iter(f, 4, add_two);
	iter(f, 4, print_type);

	double	d[4] = {1.5, 54.98, 42.42, 24.74};
	iter(d, 4, add_two);
	iter(d, 4, print_type);

	iter(str, (int)(strlen(str)), add_two);
}
