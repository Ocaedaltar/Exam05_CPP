/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mage.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:21:12 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:15:50 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mage.hpp"
#include "WoodenStick.hpp"

Mage::Mage( void ) : APersonnage( HP_MAGE, EP_MAGE, MP_MAGE, AD_MAGE, "Mage" )
{
	this->arme = new WoodenStick();
}

Mage::~Mage( void )
{}
