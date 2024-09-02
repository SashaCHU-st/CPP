/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:01:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/02 16:34:06 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"

int main (int argc, char **argv)
{
	Harl harl;
	std::string kuku = argv[1];
	if (argc == 2)
	{
		harl.complain(kuku);
	}
	else
		std::cout << " Wrong amount of arg, need to be 2 "<<std::endl;
	
	return(0);
}