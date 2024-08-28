/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:58:42 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/28 17:31:49 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
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
	char cs1[s1.length()];
	strcpy(cs1, s1.c_str());
	std::string s2 = argv[3];
	char cs2[s2.length()];
	strcpy(cs2, s2.c_str());
	int found = 0;
	unsigned long offset;
	std:: string result;
	
	std::ifstream input(argv[1]);

	std::string outfile = filename + ".replace";
	std::ofstream out(outfile);
	if(input.is_open())
	{
		while (!input.eof())
		{
			getline(input, kuku);
			if((offset = kuku.find(s1, 0)) != std::string::npos)
			{
				std:: cout << "Found" << s1 << std::endl;
				found = 1;
			}
			else 
				std::cout << "not found";
			if(found == 1)
			{
				for (unsigned long i = 0; i < kuku.length(); i++)
				{
					if(input && out)
					{
							while (getline(input, kuku))
							{
								while (kuku[i] != '\0')
								{
									while(kuku[i] == cs1[0])
									{
										kuku[i] = cs2[0];
									}
									i++;
								}
								for (unsigned long j = i; j < kuku.length(); ++j)
								{
									result += kuku[j];
								}

								out << result << "\n";
							}
					}
				}
			}
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