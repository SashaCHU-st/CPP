/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:45:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 08:46:20 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
	for(int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j] != '\0'; j++)
		{
			if((argv[i][j] >= 97 && argv[i][j] <= 122 ))
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
			else
				std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	}
	return 0;
}
