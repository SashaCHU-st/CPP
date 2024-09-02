/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:15:01 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/02 16:10:54 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"


void Harl:: debug( void )
{
	std::cout << " I am debug"<<std::endl;
};
void Harl::  info( void )
{
	std::cout << " I am info "<<std::endl;
};
void Harl::  warning( void )
{
	std::cout << " I am warning "<<std::endl;
};
void Harl:: error( void )
{
	std::cout << " I am error "<<std::endl;
};

const std::string* Harl::levels()
{
	static const std::string lev[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	return (lev);
};

void Harl::complain(std::string level)
{
	void (Harl::*fun[])()
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	const std::string* levelStrings = levels();
	for (int i = 0; i < 4; i++)
	{
		if(levelStrings[i] == level)
		{
			(this->*fun[i])();
			break;
		}
	}
};