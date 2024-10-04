/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:11:39 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/17 16:29:45 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int	j;

	j = 1;
	if (ac > 1)
	{
		while (j < ac)
		{
			i = 0;
			std::string str = av[j];
			while (str[i])
			{
				av[j][i] = std::toupper(av[j][i]);
				std::cout << av[j][i];
				i++;
			}
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
