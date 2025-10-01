/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/01 19:58:43 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::addContact()
{
	std::cout << "DEBUG: 1\n";
}

void Phonebook::searchContact()
{
	std::cout << "DEBUG: 2\n";
}

void Phonebook::quitPhonebook()
{
	std::cout << "DEBUG: 3\n";
}

static bool handle_errors(int argc, char **argv)
{
	if (argc != 1 || argv[1])
	{
		std::cout << "DEBUG: Error!\n";
		return (false);
	}
	return (true);
}
int main(int argc, char **argv)
{
	Phonebook mangoloko;
	std::string command;

	if (!handle_errors(argc, argv))
		return 1;
	std::cout << "Welcome to the Phonebook program!" << "\n";
	while (1)
	{
		std::cout << "Please enter a command(ADD || SEARCH || EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			mangoloko.addContact();
		}
		else if (command == "SEARCH")
		{
			mangoloko.searchContact();
		}
		else if (command == "EXIT")
		{
			mangoloko.quitPhonebook();
			break ;
		}
	}
	return (0);
}

/*
	TODO:

	- loop
	-dividir em arquivos .cpp e .hpp
	- começar o ADD
*/