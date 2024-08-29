/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/29 14:32:50 by aheinane         ###   ########.fr       */
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
		unsigned phoneNumber;
		std::string darkestSecret;
		bool at_least_one;
	public:
		void set_fn(std::string s_firstName)
		{
			this->firstName = s_firstName;
		}
		void set_ln(std::string s_lastName)
		{
			this->lastName = s_lastName;
		}
		void set_nn(std::string s_nickName)
		{
			this->nickname = s_nickName;
		}
		void set_pn(unsigned s_phoneNumber)
		{
			this->phoneNumber = s_phoneNumber;
		}
		void set_ds(std::string s_darkestSecret)
		{
			this->darkestSecret = s_darkestSecret;
		}
		void set_at_least_one(unsigned at_least_one)
		{
			this->at_least_one = at_least_one;
		}
		std::string get_fn()
		{
			return(this->firstName);
		}
		std::string get_ln()
		{
			return(this->lastName);
		}
		std::string get_nn()
		{
			return(this->nickname);
		}
		unsigned get_pn()
		{
			return(this->phoneNumber);
		}
		std::string get_ds()
		{
			return(this->darkestSecret);
		}
		unsigned get_at_least_one()
		{
			return(this->at_least_one);
		}
};

#endif