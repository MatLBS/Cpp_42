/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:26:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/04 12:30:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreation", S_SIGN_MIN, S_EXEC_MIN)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", S_SIGN_MIN, S_EXEC_MIN), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): AForm("ShrubberyCreation", S_SIGN_MIN, S_EXEC_MIN), _target(copy._target + "_copy")
{
	*this = copy;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void)src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}


void	ShrubberyCreationForm::to_execute(void) const
{
	std::string	namefile = this->_target + "_shrubbery";
	std::ofstream outfile(namefile.c_str());
	if (!outfile)
	{
		std::cout << "Failed to open the outfile." << std::endl;
		return ;
	}
	outfile << "               ,@@@@@@@, " << std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
	outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888 88/8o" << std::endl;
	outfile << "   ,%& %&&%&&%,@@@ @@@/@@@88 88888/88'" << std::endl;
	outfile << "   %&&%&%&/%&&%@@ @@/ /@@@88888 88888'" << std::endl;
	outfile << "   %&&%/ %&%%&&@@  V /@@' `88 8 `/88'" << std::endl;
	outfile << "   `&%  ` /%&'    |.|          '|8'" << std::endl;
	outfile << "       |o|        | |         | |" << std::endl;
	outfile << "       |.|        | |         | |" << std::endl;
	outfile << "      / ._ //_/__/  , _//__  /.   _//__/_" << std::endl;
}

