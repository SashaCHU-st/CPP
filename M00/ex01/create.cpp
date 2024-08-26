/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:02:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 14:13:10 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "own.hpp"
void PhoneBook:: createContact(Contact contact)
{
	if (index < maxContacts)
		contacts[index++] = contact;
	else
	{
		cout << "PhoneBook is full, replacing the last one" << endl;
		contacts[index - 1] = contact;
		index++;
	}
}
