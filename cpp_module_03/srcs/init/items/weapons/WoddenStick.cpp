/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WoddenStick.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:49:24 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 21:50:05 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WoodenStick.hpp"

WoodenStick::WoodenStick(void) :
	AWeapon(AD_WOODENSTICK, AP_WOODENSTICK, NAME_WOODENSTICK, PRICE_WOODENSTICK, NUM_WOODENSTICK, DESC_WOODENSTICK)
{}

WoodenStick::~WoodenStick(void)
{}

AItem* WoodenStick::clone( void ) const
{
	return (new WoodenStick());
}