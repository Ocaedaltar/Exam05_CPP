/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   APersonnage.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:24:18 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:34:32 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "APersonnage.hpp"

APersonnage::APersonnage( int hp, int ep, int mp, int atk, std::string classe) :
	player(Info(classe)), healtPoint(hp), energiePoint(ep), manaPoint(mp), attackPoint(atk)
{
}

APersonnage::~APersonnage( void )
{
	if (arme)
		delete arme;
}

int const &APersonnage::getHealtPoint( void ) const
{
	return healtPoint;
}

int const &APersonnage::getEnergiePoint( void ) const
{
	return energiePoint;
}

int const &APersonnage::getManaPoint( void ) const
{
	return manaPoint;
}

int const &APersonnage::getAttackPoint( void ) const
{
	return attackPoint;
}

Info const &APersonnage::getPlayerInfo( void ) const
{
	return player;
}

AWeapon *APersonnage::getWeapon( void ) const
{
	if (arme)
		return arme;
	return NULL;
}

std::ostream& operator<<( std::ostream& os, APersonnage const &perso )
{
	os << perso.getPlayerInfo() << std::endl;

	AWeapon *tmp = perso.getWeapon();
	if (tmp)
		os << *tmp << std::endl;
	os << "HP: " << perso.getHealtPoint() << std::endl;
	os << "EP: " << perso.getEnergiePoint() << std::endl;
	os << "MP: " << perso.getManaPoint() << std::endl;
	os << "AD: " << perso.getAttackPoint() << std::endl;
	return os;
}