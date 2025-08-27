/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:02:22 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/08/27 09:35:42 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	char	*input;
	int	i = 0;
	int	count = 0;

	input = argv[1];
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	else if (argc > 1)
	{
		while(input[i] != '\0' && count < (argc - 1))
		{
			if (input[i] == ' ')
				count++;
			std::cout << (char)toupper(input[i]);
			i++;
		}
	}
	return (0);
}
