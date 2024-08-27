/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:02:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 10:05:06 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "own.hpp"
void PhoneBook:: createContact(Contact contact)
{
	if (index < maxContacts)
		contacts[index++] = contact;
	else
	{
		std::cout << "PhoneBook is full, replacing the last one\n";
		contacts[index - 1] = contact;
		index++;
	}
}
