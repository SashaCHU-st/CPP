/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:24:17 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 09:31:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "own.hpp"
void Contact:: set_fn(std::string s_firstName)
{
	this->firstName = s_firstName;
}
void Contact:: set_ln(std::string s_lastName)
{
	this->lastName = s_lastName;
}
void Contact::set_nn(std::string s_nickName)
{
	this->nickname = s_nickName;
}
void Contact::set_pn(std::string s_phoneNumber)
{
	this->phoneNumber = s_phoneNumber;
}
void Contact::set_ds(std::string s_darkestSecret)
{
	this->darkestSecret = s_darkestSecret;
}
void Contact::set_at_least_one(bool s_at_least_one)
{
	this->at_least_one = s_at_least_one;
}
std::string Contact::get_fn()
{
	return(this->firstName);
}
std::string Contact::get_ln()
{
	return(this->lastName);
}
std::string Contact::get_nn()
{
	return(this->nickname);
}
std::string Contact::get_pn()
{
	return(this->phoneNumber);
}
std::string Contact::get_ds()
{
	return(this->darkestSecret);
}
bool Contact::get_at_least_one() const
{
	return (this->at_least_one);
}