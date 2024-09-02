/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:47:51 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 13:22:01 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OWN_HPP
# define OWN_HPP

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
# include "Zombie.hpp"
using namespace std;

void randomChump( std::string name );
Zombie* newZombie(std::string p_name);

#endif