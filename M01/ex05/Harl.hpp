/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:43:20 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 11:36:45 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

#include "own.hpp"
class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		static const std::string *levels();
	public:
		void complain(std::string level);
};

#endif