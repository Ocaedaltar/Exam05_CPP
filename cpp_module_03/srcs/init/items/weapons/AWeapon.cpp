/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:07:29 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:34:56 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( int ad, int ap, std::string name, int price, int number, std::string description) :
	AItem(name, price, number, description), damage(ad), puissance(ap)
{
	// std::cout << "AWeapon Create" << std::endl;
}

AWeapon::~AWeapon( void )
{
	// std::cout << "AWeapon Destroy" << std::endl;
}

std::ostream& operator<<( std::ostream& os, AWeapon const &arme )
{
	arme.printData(os);
	return os;
}
