/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:35:41 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 09:11:16 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OWN_HPP
# define OWN_HPP

#include <iostream>
#include <iomanip>
# include "Contact.hpp"
# include "PhoneBook.hpp"

Contact addingNew();
int is_digits(const std::string& str);

#endif