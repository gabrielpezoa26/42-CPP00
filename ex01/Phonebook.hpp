/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:00:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/06 20:04:24 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <cctype>
#include <stdlib.h>
#include <cstdlib>
#include <ctype.h>

#define COLUMN_WIDTH 10

class Phonebook
{
	private:
	Contact contact_list[8];
	int		contact_index;
	void printMessage(std::string message);
	void printHeader();
	std::string truncateString(std::string temp);
	void printExtraSpace(int extraSpace, std::string temp);
	void printRow(int index);
	void printFullInfo(int index);
	void promptFirstName(std::string user_input);
	void promptLastName(std::string user_input);
	void promptNickName(std::string user_input);
	void promptPhoneNumber(std::string user_input);
	void promptDarkestSecret(std::string user_input);
	bool isValidNumber(std::string user_input);


	public:
		Phonebook()
		{
			contact_index = 0;
		}
	void addContact();
	void searchContact();
	void quitPhonebook();
	
	// std::list getContactList();

};

#endif