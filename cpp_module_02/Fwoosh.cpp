/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:09:08 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 12:09:25 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) :
	ASpell( "Fwoosh", "fwooshed" )
{}

Fwoosh::~Fwoosh( void ) {}

ASpell* Fwoosh::clone( void ) const
{
	return (new Fwoosh());
}
