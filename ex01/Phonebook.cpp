/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/05 00:58:32 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::printMessage(std::string message)
{
	std::cout << message << std::endl;
}

void Phonebook::promptFirstName(std::string user_input)
{
	while(true)
	{
		std::cout << "Please enter the first name: ";
		getline(std::cin, user_input);
		if (!user_input.empty())
		{
			break ;
		}
	}
	contact_list[contact_index].setFirstName(user_input);
	std::cout << "DEBUG: first name = " << user_input << std::endl;
}

void Phonebook::promptLastName(std::string user_input)
{
	while(true)
	{	
		std::cout << "Please enter the last name: ";
		getline(std::cin, user_input);
		if (!user_input.empty())
		{
			break ;
		}
	}
	contact_list[contact_index].setLastName(user_input);
	std::cout << "DEBUG: last name = " << user_input << std::endl;
}

void Phonebook::promptNickName(std::string user_input)
{
	while(true)
	{	
		std::cout << "Please enter the nickname: ";
		getline(std::cin, user_input);
		if (!user_input.empty())
		{
			break ;
		}
	}
	contact_list[contact_index].setNickName(user_input);
	std::cout << "DEBUG: nickname = " << user_input << std::endl;
}

void Phonebook::promptPhoneNumber(std::string user_input)
{
	while(true)
	{	
		std::cout << "Please enter the phonenumber: ";
		getline(std::cin, user_input);
		if (!user_input.empty())
		{
			if (isValidNumber(user_input))
				break ;
		}
	}
		contact_list[contact_index].setPhoneNumber(user_input);
		std::cout << "DEBUG: phonenumber = " << user_input << std::endl;
}

bool Phonebook::isValidNumber(std::string user_input)
{
	unsigned long int i = 0;

	while(i < user_input.length())
	{
		if(!std::isdigit(user_input[i]))
		{
			printMessage("Insert only digits.");
			return false;
		}
		i++;
	}
	return true;
}

void Phonebook::promptDarkestSecret(std::string user_input)
{
	while(true)
	{
		std::cout << "Please enter the darkest secret: ";
		getline(std::cin, user_input);
		if (!user_input.empty())
		{
			break ;
 		}
	}
	contact_list[contact_index].setDarkestSecret(user_input);
	std::cout << "DEBUG: secret = " << user_input << std::endl;
}

void Phonebook::addContact()
{
	std::string user_input;

	printMessage("SELECTED:: ADD");
	promptFirstName(user_input);
	promptLastName(user_input);
	promptNickName(user_input);
	promptPhoneNumber(user_input);
	promptDarkestSecret(user_input);
	printMessage("Contact added succesfully!");

	contact_index++;
	if (contact_index == 8)
	{
		std::cout << "DEBUG: zerouuu\n";
		contact_index = 0;
	}
}

/* design:

--------------------------------------------------
     Index|      Name| Last Name|  Nickname|
--------------------------------------------------
         0|      maça|     silva|          |
         1|    banana|     mango|          |
         2|     melao|          |          |
         3|          |          |          |
         4|          |          |          |
         5|          |          |          |
         6|          |          |          |
*/

void Phonebook::printHeader()
{
	printMessage("--------------------------------------------------");
	printMessage("     Index|      Name| Last Name|  Nickname|");
	printMessage("--------------------------------------------------");
}

void Phonebook::printRow()
{
	int index;
	std::string name;
	std::string last;
	std::string nick;
	int extraSpace;

	index = contact_index - 1;
	name = contact_list[contact_index - 1].getFirstName();
	last = contact_list[contact_index - 1].getLastName();
	nick = contact_list[contact_index - 1].getNickName();
	extraSpace = COLUMN_WIDTH - name.length();
	
	
	
	std::cout << "DEBUG::index" << index << std::endl;
	std::cout << "DEBUG::name" << name << std::endl;
	std::cout << "DEBUG:extraSpace" << extraSpace << std::endl;

	
}

void Phonebook::searchContact()
{
	printMessage("SELECTED:: SEARCH");
	if (contact_index != 0)
	{
		printHeader();
		printRow();
	}
	else
		printMessage("List is empty!");
}

void Phonebook::quitPhonebook()
{
	printMessage("SELECTED:: EXIT");
	sleep(1);
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
