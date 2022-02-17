/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ButterKniffle.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:02:09 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 22:02:38 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ButterKniffle.hpp"

ButterKniffle::ButterKniffle(void) :
	AWeapon(AD_BUTTERKNIFFLE, AP_BUTTERKNIFFLE, NAME_BUTTERKNIFFLE, PRICE_BUTTERKNIFFLE, NUM_BUTTERKNIFFLE, DESC_BUTTERKNIFFLE)
{}

ButterKniffle::~ButterKniffle(void)
{}

AItem* ButterKniffle::clone( void ) const
{
	return (new ButterKniffle());
}
