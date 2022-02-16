/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:07:34 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 15:07:42 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ) :
	ATarget( "Inconspicuous Red-brick Wall" )
{}

BrickWall::~BrickWall()
{}

ATarget* BrickWall::clone( void ) const
{
	return (new BrickWall());
}
