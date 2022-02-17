/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MoldyGloves.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:58:47 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:35:04 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MoldyGloves.hpp"

MoldyGloves::MoldyGloves(void) :
	AWeapon(AD_MOLDYGLOVES, AP_MOLDYGLOVES, NAME_MOLDYGLOVES, PRICE_MOLDYGLOVES, NUM_MOLDYGLOVES, DESC_MOLDYGLOVES)
{
	// std::cout << "MoldyGloves Create" << std::endl;
}

MoldyGloves::~MoldyGloves(void)
{
	// std::cout << "MoldyGloves Destroy" << std::endl;
}

AItem* MoldyGloves::clone( void ) const
{
	return (new MoldyGloves());
}