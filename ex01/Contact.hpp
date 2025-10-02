/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:50:04 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/10/02 15:00:38 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
	private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	

	public:
	void setFirstName(std::string newFirstName);
	void setLastName(std::string newLastName);
	void setNickName(std::string newNickName);
	void setPhoneNumber(std::string newPhoneNumber);
	void setDarkestSecret(std::string newDarkestSecret);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif