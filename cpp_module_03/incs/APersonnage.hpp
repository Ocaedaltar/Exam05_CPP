/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   APersonnage.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:40:23 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:18:12 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APERSONNAGE_HPP
# define APERSONNAGE_HPP

# include "Info.hpp"
# include "AWeapon.hpp"

class APersonnage
{
public:

protected:

	Info player;

	int		healtPoint;
	int		energiePoint;
	int		manaPoint;
	int		attackPoint;
	
	AWeapon *arme;

	// Inventory	inventaire;

	// LvL		level;
	// Skills	competence;

	APersonnage( void );
public:
	APersonnage( int hp, int ep, int mp, int atk, std::string classe);
	virtual ~APersonnage( void );

	int const &getHealtPoint( void ) const;
	int const &getEnergiePoint( void ) const;
	int const &getManaPoint( void ) const;
	int const &getAttackPoint( void ) const;

	AWeapon *getWeapon( void ) const;

	Info const &getPlayerInfo( void ) const;

};

std::ostream& operator<<( std::ostream& os, APersonnage const &perso );

#endif