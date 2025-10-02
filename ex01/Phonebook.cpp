/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/02 16:23:45 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <unistd.h>
#include <cstdlib>
#include <string>

void Phonebook::addContact()
{
	Contact contact;
	int i;
	std::string user_input;

	i = 0;
	while (1)
	{
		std::cout << "Please enter the first name: ";
		getline(std::cin, user_input);
		contact.setFirstName(user_input);
		std::cout << "DEBUG: first name = " << user_input << std::endl;

		std::cout << "Please enter the last name: ";
		getline(std::cin, user_input);
		contact.setLastName(user_input);
		std::cout << "DEBUG: last name = " << user_input << std::endl;

		std::cout << "Please enter the nickname: ";
		getline(std::cin, user_input);
		contact.setNickName(user_input);
		std::cout << "DEBUG: nickname = " << user_input << std::endl;

		std::cout << "Please enter the phonenumber: ";
		getline(std::cin, user_input);
		contact.setPhoneNumber(user_input);
		std::cout << "DEBUG: phonenumber = " << user_input << std::endl;
		
		std::cout << "Please enter the darkest secret: ";
		getline(std::cin, user_input);
		contact.setDarkestSecret(user_input);
		std::cout << "DEBUG: secret = " << user_input << std::endl;

		std::cout << "Contact added successfully!" << std::endl;
		break ;
	}
}

void Phonebook::searchContact()
{
	std::cout << "DEBUG: selected 'SEARCH' 2\n";
}

void Phonebook::quitPhonebook()
{
	std::cout << "Burning all contacts ...\n";
	sleep(1);
	std::cout << "...\n";
	sleep(2);
	std::cout << "...\n";
	sleep(2);
	std::cout << "...\n";
	sleep(2);
	std::cout << "All contacts are lost forever! Exiting phonebook.\n";
	exit(EXIT_SUCCESS);
}
