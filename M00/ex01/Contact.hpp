/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 11:18:26 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class Contact
{
	private:
		string firstName;
		string lastName;
		string nickname;
		unsigned phoneNumber;
		string darkestSecret;
	public:
///setters
		void set_fn(string s_firstName)
		{
			this->firstName = s_firstName;
		}
		void set_ln(string s_lastName)
		{
			this->lastName = s_lastName;
		}
		void set_nn(string s_nickName)
		{
			this->nickname = s_nickName;
		}
		void set_pn(unsigned s_phoneNumber)
		{
			this->phoneNumber = s_phoneNumber;
		}
		void set_ds(string s_darkestSecret)
		{
			this->darkestSecret = s_darkestSecret;
		}
////getters
		string get_fn()
		{
			return(this->firstName);
		}
		string get_ln()
		{
			return(this->lastName);
		}
		string get_nn()
		{
			return(this->nickname);
		}
		unsigned get_pn()
		{
			return(this->phoneNumber);
		}
		string get_ds()
		{
			return(this->darkestSecret);
		}
};

#endif