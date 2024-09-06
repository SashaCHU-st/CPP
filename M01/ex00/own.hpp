/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:47:51 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:24:26 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OWN_HPP
# define OWN_HPP

#include <iostream>
# include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie(std::string p_name);

#endif