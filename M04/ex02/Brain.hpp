/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:47:05 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/10 16:55:35 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std:: string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const &copy);
		Brain& operator= (const Brain& op);
		
		std::string getIdea(int index);
		void setIdea(int index, std::string idea);
};

#endif