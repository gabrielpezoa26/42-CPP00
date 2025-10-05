/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:00:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/04 22:49:42 by gcesar-n         ###   ########.fr       */
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

#define COLUMN_WIDTH 10
#define MAX_WIDTH 45

class Phonebook
{
	private:
	Contact contact_list[8];
	int		contact_index;
	void printMessage(std::string message);
	void printHeader();
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