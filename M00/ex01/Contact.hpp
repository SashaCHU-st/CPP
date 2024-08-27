/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 13:48:36 by aheinane         ###   ########.fr       */
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
};

#endif