/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/01 18:54:35 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool Phonebook::addContact()
{
	std::cout << "DEBUG: 1";
	return true;
}

bool Phonebook::searchContact()
{
	std::cout << "DEBUG: 2";
	return true;

}

bool Phonebook::quitPhonebook()
{
	std::cout << "DEBUG: 3";
	return true;

}

int main(int argc, char **argv)
{
	Phonebook mangoloko;
	std::string command;

	if (argc != 1)
	{
		std::cout << "DEBUG: Error!";
		return (1);
	}
	command = argv[0];
	while (1)
	{
		if (command == "ADD")
			mangoloko.addContact();
		if (command == "SEARCH")
			mangoloko.searchContact();
		if (command == "EXIT")
			mangoloko.quitPhonebook();
	}
	return (0);
}
