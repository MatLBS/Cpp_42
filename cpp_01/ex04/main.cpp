/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:17:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 11:32:48 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	replace_word(std::string filename, std::string s1, std::string s2)
{
	std::string	content;
	std::size_t	i;
	std::string line;

	i = -1;
	std::ifstream infile(filename.c_str());
	if (!infile)
		return (std::cout << "Failed to open the infile." << std::endl, 1);
	while (std::getline(infile, line))
		content += line + '\n';
	infile.close();
	while (++i < content.size())
	{
		if (content.compare(i, s1.size(), s1) == 0)
		{
			content.erase(i, s1.size());
			content.insert(i, s2);
		}
	}
	filename += ".replace";
	std::ofstream outfile(filename.c_str());
	if (!outfile)
		return (std::cout << "Failed to open the outfile." << std::endl, 1);
	outfile << content << std::endl;
	outfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (ac < 4)
	{
		std::cout << "Please type : ./replace <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (replace_word(filename, s1, s2) == 1)
		return (1);
	return (0);
}
