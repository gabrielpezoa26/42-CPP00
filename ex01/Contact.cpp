/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:49:40 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/02 15:00:53 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string newFirstName)
{
	FirstName = newFirstName;
}

void Contact::setLastName(std::string newLastName)
{
	LastName = newLastName;
}

void Contact::setNickName(std::string newNickName)
{
	NickName = newNickName;
}

void Contact::setPhoneNumber(std::string newPhoneNumber)
{
	PhoneNumber = newPhoneNumber;
}

void Contact::setDarkestSecret(std::string newDarkestSecret)
{
	DarkestSecret = newDarkestSecret;
}

std::string Contact::getFirstName()
{
	return FirstName;
}

std::string Contact::getLastName()
{
	return LastName;
}

std::string Contact::getNickName()
{
	return NickName;
}

std::string Contact::getPhoneNumber()
{
	return PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return DarkestSecret;
}
