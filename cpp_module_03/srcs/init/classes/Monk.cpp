/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Monk.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:22:05 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:35:00 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Monk.hpp"
#include "MoldyGloves.hpp"

Monk::Monk( void ) : APersonnage( HP_MONK, EP_MONK, MP_MONK, AD_MONK, "Monk" )
{
	this->arme = new MoldyGloves();
	// std::cout << "Monk Create" << std::endl;
}

Monk::~Monk( void )
{
	// std::cout << "Monk Destroy" << std::endl;
}