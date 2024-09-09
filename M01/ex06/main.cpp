/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:01:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 12:06:03 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << " Wrong amount of arg, need to be 2 "<<std::endl;
		return(1);
	}
	
	Harl harl;
	std::string kuku = argv[1];
	harl.complain(kuku);
	return(0);
}