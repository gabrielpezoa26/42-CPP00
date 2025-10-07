/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/07 15:56:41 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	contact_index = 0;
	contact_count = 0;
}

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

	contact_index = (contact_index + 1) % 8;

	if (contact_count < 8)
	{
		contact_count++;
	}
}

void Phonebook::printHeader()
{
	printMessage("--------------------------------------------------");
	printMessage("     Index|      Name| Last Name|  Nickname|");
	printMessage("--------------------------------------------------");
}

std::string Phonebook::truncateString(std::string temp)
{
	if (temp.length() > COLUMN_WIDTH)
	{
		temp.resize(9);
		temp = temp + ".";
	}
	return (temp);
}
 
void Phonebook::printExtraSpace(int extraSpace, std::string temp)
{
	extraSpace = COLUMN_WIDTH - temp.length();
	while(extraSpace > 0)
	{
		std::cout << " ";
		extraSpace--;
	}
}

void Phonebook::printRow(int index)
{
	std::string temp;
	int extraSpace;

	extraSpace = 9;
	while(extraSpace > 0)
	{
		std::cout << " ";
		extraSpace--;
	}
	std::cout << index;
	std::cout << "|";


	temp = contact_list[index].getFirstName();
	temp = truncateString(temp);
	printExtraSpace(extraSpace, temp);
	std::cout << temp;
	std::cout << "|";


	temp = contact_list[index].getLastName();
	temp = truncateString(temp);
	printExtraSpace(extraSpace, temp);
	std::cout << temp;
	std::cout << "|";


	temp = contact_list[index].getNickName();
	temp = truncateString(temp);
	printExtraSpace(extraSpace, temp);
	std::cout << temp;
	std::cout << "|\n";
}

void Phonebook::printFullInfo(int index)
{
	std::string temp;

	temp = contact_list[index].getFirstName();
	std::cout << "First name: " << temp << std::endl;

	temp = contact_list[index].getLastName();
	std::cout << "Last name: " << temp << std::endl;

	temp = contact_list[index].getNickName();
	std::cout << "Nick name: " << temp << std::endl;

	temp = contact_list[index].getPhoneNumber();
	std::cout << "Phone number: " << temp << std::endl;

	temp = contact_list[index].getDarkestSecret();
	std::cout << "Darkest Secret: " << temp << std::endl;
}

void Phonebook::promptIndex()
{
	std::string input_search;
	int	index;

	std::cout << "Select an index to see the full details (or anything else to going to Menu): ";
	std::getline(std::cin, input_search);
	
	std::stringstream ss(input_search);
	ss >> index;
	if (ss.fail() || index < 0 || index >= contact_count)
	{
		printMessage("Invalid index! Going to menu.");
		return;
	}
	else
	{
		printFullInfo(index);
	}
}

void Phonebook::searchContact()
{
	int i;

	printMessage("SELECTED:: SEARCH");
	if (contact_count == 0)
	{
		printMessage("Your list is empty!");
	}
	printHeader();
	for (i = 0; i < contact_count; i++)
	{
		printRow(i);
	}
	promptIndex();
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
