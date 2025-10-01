/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:26:09 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/01 15:00:15 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static bool add_contact();
static bool search_contact();
static bool quit_phonebook();

int main(int argc, char **argv)
{
	std::string command;

	command = argv[1];
	if(!command)
		return 1;  //printar erro

	while (1)
	{
		if (command == "ADD")
			add_contact();
		if (command == "SEARCH")
			search_contact();
		if (command == "EXIT")
			quit_phonebook();
	}
	return (0);
}
