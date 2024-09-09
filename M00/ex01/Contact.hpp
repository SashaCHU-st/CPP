/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 10:07:21 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "own.hpp"

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void set_fn(std::string s_firstName);
		void set_ln(std::string s_lastName);
		void set_nn(std::string s_nickName);
		void set_pn(std::string s_phoneNumber);
		void set_ds(std::string s_darkestSecret);

		std::string get_fn();
		std::string get_ln();
		std::string get_nn();
		std::string get_pn();
		std::string get_ds();
};

#endif