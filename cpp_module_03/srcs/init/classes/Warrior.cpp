/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:22:34 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:17:57 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"
#include "RustedSword.hpp"

Warrior::Warrior( void ) : APersonnage( HP_WARRIOR, EP_WARRIOR, MP_WARRIOR, AD_WARRIOR, "Warrior" )
{
	this->arme = new RustedSword();
}

Warrior::~Warrior( void )
{}