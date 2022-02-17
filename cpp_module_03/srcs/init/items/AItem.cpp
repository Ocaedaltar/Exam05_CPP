/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AItem.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:26:04 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:20:59 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AItem.hpp"

AItem::AItem( std::string name, int price, int number, std::string description ) :
	name(name), price(price), number(number), description(description)
{}

AItem::~AItem( void)
{}

// void AItem::besold(APersonnage const &user, ATarget const & target )
// {
	
// }

// void AItem::bebuy(APersonnage const &user, ATarget const & target )
// {
	
// }

std::string const &AItem::getName( void ) const
{
	return name;
}

std::string const &AItem::getDesc( void ) const
{
	return description;
}

int const &AItem::getPrice( void ) const
{
	return price;
}

int const &AItem::getNumber( void ) const
{
	return number;
}

void AItem::printData( std::ostream& os ) const
{
	os << "Arme: " << getName() << std::endl;
	os << "----> " << getDesc() << std::endl;
}
