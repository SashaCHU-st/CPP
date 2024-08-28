/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:58:42 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/28 15:32:31 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
int main (int argc, char **argv)
{
	if(argc != 2)
	{
		std:: cout <<"Usage ./sed <filename> <a> <o>";
		return(0);
	}
	std::string kuku;
	std::string filename = argv[1];
	// std::string s1 = argv[2];
	// std::string s2 = argv[3];
	std::ifstream input(argv[1]);
	std::string outfile = filename + ".replace";
	std::ofstream out(outfile);
	if(input && out)
	{
		while (getline(input, kuku))
		{
			out<< kuku << "\n";
		}
		std::cout <<"All good";
	}
	else
		std::cout<<"Cannot read file"; 
	if(!out) 
	{ 
		std::cout<<"Error in creating file!!!"; 
		return (0); 
	}
	input.close();
	out.close();
	return (0); 
}