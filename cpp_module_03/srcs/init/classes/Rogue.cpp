/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rogue.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:49:17 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:17:20 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rogue.hpp"
#include "ButterKniffle.hpp"

Rogue::Rogue( void ) : APersonnage( HP_ROGUE, EP_ROGUE, MP_ROGUE, AD_ROGUE, "Rogue" )
{
	this->arme = new ButterKniffle();
}

Rogue::~Rogue( void )
{}