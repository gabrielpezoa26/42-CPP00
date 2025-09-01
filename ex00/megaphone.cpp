/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:02:22 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/09/01 13:03:58 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void megaphone(char *input)
{
	int	i = 0;
	int	count = 0;

	while(input[i] != '\0')
	{
		if (input[i] == ' ')
			count++;
		std::cout << (char)toupper(input[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	char	*input = argv[1];

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	megaphone(input);
	return (0);
}
