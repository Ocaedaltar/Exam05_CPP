/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RustedSword.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:48:54 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 21:49:11 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RustedSword.hpp"

RustedSword::RustedSword(void) :
	AWeapon(AD_RUSTEDSWORD, AP_RUSTEDSWORD, NAME_RUSTEDSWORD, PRICE_RUSTEDSWORD, NUM_RUSTEDSWORD, DESC_RUSTEDSWORD)
{}

RustedSword::~RustedSword(void)
{}

AItem* RustedSword::clone( void ) const
{
	return (new RustedSword());
}
