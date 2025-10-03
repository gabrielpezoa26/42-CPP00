/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/03 16:46:14 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// std::string Phonebook std::list getContactList()
// {
	
// }

void Phonebook::addContact()
{
	std::string user_input;

	std::cout << "Please enter the first name: ";
	getline(std::cin, user_input);
	contact_list[contact_index].setFirstName(user_input);
	std::cout << "DEBUG: first name = " << user_input << std::endl;

	std::cout << "Please enter the last name: ";
	getline(std::cin, user_input);
	contact_list[contact_index].setLastName(user_input);
	std::cout << "DEBUG: last name = " << user_input << std::endl;

	std::cout << "Please enter the nickname: ";
	getline(std::cin, user_input);
	contact_list[contact_index].setNickName(user_input);
	std::cout << "DEBUG: nickname = " << user_input << std::endl;

	std::cout << "Please enter the phonenumber: ";
	getline(std::cin, user_input);
	contact_list[contact_index].setPhoneNumber(user_input);
	std::cout << "DEBUG: phonenumber = " << user_input << std::endl;
	
	std::cout << "Please enter the darkest secret: ";
	getline(std::cin, user_input);
	contact_list[contact_index].setDarkestSecret(user_input);
	std::cout << "DEBUG: secret = " << user_input << std::endl;

	std::cout << "Contact added successfully!" << std::endl;
	contact_index++;
	if (contact_index == 8)
	{
		std::cout << "DEBUG: zerouuu\n";
		contact_index = 0;
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
