/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:02:22 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/09/01 13:27:58 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void megaphone(char *input)
{
	int	i = 0;

	while(input[i] != '\0')
	{
		if (std::isalpha(*input))
			std::cout << (char)toupper(input[i]);
		else
			std::cout << input[i];
		i++;
	}
}

int main(int ac, char **av)
{
	char	**input;

	input = ++av;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	if (ac > 1)
	{
		while(*input)
		{
			megaphone(*input);
			input++;
		}
	}
	return (0);
}
