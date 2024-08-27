/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:35:41 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 10:11:13 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OWN_HPP
# define OWN_HPP

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
# include "Contact.hpp"
# include "PhoneBook.hpp"

Contact addingNew();
int is_digits(std::string& str);

#endif