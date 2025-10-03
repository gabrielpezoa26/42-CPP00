/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:00:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/03 16:47:09 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>

class Phonebook
{
	private:
	Contact contact_list[8];
	int		contact_index;

	public:
		Phonebook()
		{
			contact_index = 0;
			std::cout << "hellooo";
		}
	void addContact();
	void searchContact();
	void quitPhonebook();
	
	// std::list getContactList();

};

#endif