/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:58:42 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 10:19:23 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Own.hpp"
int main (int argc, char *argv[])
{
	if(argc != 4)
	{
		std:: cout <<"Usage ./sed <filename> <what to find> <on what to replace>";
		return(0);
	}
	std::string kuku;
	std::string filename = argv[1];

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream input(argv[1]);

	std::string outfile = filename + ".replace";
	std::ofstream out(outfile);
	if(input.is_open())
	{
		while (getline(input, kuku))
		{
			std::string result;
			size_t offset = 0;
			size_t pos;

		
			while ((pos = kuku.find(s1, offset)) != std::string::npos)
			{
				for (size_t i = offset; i < pos; ++i)
					result += kuku[i];
				result += s2;
				offset = pos + s1.length();
			}
			for (size_t i = offset; i < kuku.length(); ++i)
				result += kuku[i];
			out << result << "\n";
		}
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