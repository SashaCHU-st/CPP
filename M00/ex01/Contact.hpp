/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 09:30:35 by aheinane         ###   ########.fr       */
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
		bool at_least_one;
	public:
		void set_fn(std::string s_firstName);
		void set_ln(std::string s_lastName);
		void set_nn(std::string s_nickName);
		void set_pn(std::string s_phoneNumber);
		void set_ds(std::string s_darkestSecret);
		void set_at_least_one(bool s_at_least_one); 

		std::string get_fn();
		std::string get_ln();
		std::string get_nn();
		std::string get_pn();
		std::string get_ds();
		bool get_at_least_one() const;
};

#endif