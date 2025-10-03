/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:00:11 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/03 12:38:01 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <list>
#include <cstdlib>
#include <stdio.h> //apagar

class Phonebook
{
	private:
	Contact contact_list[8];


	public:
	void addContact();
	void searchContact();
	void quitPhonebook();
	
	// std::list getContactList();

};

#endif