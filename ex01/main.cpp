/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:51:16 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/04 17:22:41 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

static bool	check_args(int argc, char **argv)
{
	if (argc != 1 || argv[1])
	{
		std::cout << "Incorrect argument count :(( " << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	Phonebook mangoloko;
	std::string command;

	if (!check_args(argc, argv))
		return 1;
	std::cout << "Welcome to the Phonebook program!" << std::endl;
	while (1)
	{
		std::cout << "Please enter a command( ADD || SEARCH || EXIT )>> ";
		std::getline(std::cin, command);

		if (command == "ADD")
			mangoloko.addContact();
		else if (command == "SEARCH")
			mangoloko.searchContact();
		else if (command == "EXIT")
			mangoloko.quitPhonebook();
		else
		{
			std::cout << "Please try a valid command ;)" << std::endl; 
		}
	}
	return (0);
}
