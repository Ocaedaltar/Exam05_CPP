/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:02:44 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 15:02:45 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : 
	ASpell( "Fireball", "burnt to a crisp")
{}

Fireball::~Fireball()
{}

ASpell* Fireball::clone(void) const
{
	return (new Fireball());
}
