/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:51:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/07 14:51:37 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static bool	check_args(int argc)
{
	if (argc != 1)
	{
		std::cout << "Incorrect argument count :/ " << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	Phonebook phonebook;
	std::string command;

	(void)argv;
	if (!check_args(argc))
		return 1;
	std::cout << "Welcome to the Phonebook program!" << std::endl;
	while (1)
	{
		if (feof(stdin))
		{
			std::cout << "DEBUG: Ctrl + D\n";
			break ;
		}
		std::cout << "Please enter a command( ADD || SEARCH || EXIT )>> ";
		std::getline(std::cin, command);

		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			phonebook.quitPhonebook();
		else
		{
			std::cout << "Please insert a valid command ;)" << std::endl; 
		}
	}
	return (0);
}
