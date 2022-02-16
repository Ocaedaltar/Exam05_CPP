/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:50 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 16:30:04 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const & name, std::string const & title ) :
	name(name), title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

void Warlock::setTitle( std::string const & new_title )
{
	title = new_title;
}

std::string const & Warlock::getName( void ) const
{
	return name;
}

std::string const & Warlock::getTitle( void ) const
{
	return title;
}

void Warlock::introduce( void ) const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void Warlock::learnSpell( ASpell * newSpell)
{
	if (newSpell)
		book.learnSpell( newSpell );
}

void Warlock::forgetSpell( std::string const & spell)
{
	book.forgetSpell(spell);
}

void Warlock::launchSpell( std::string const & spell, ATarget const & target)
{
	ASpell* tmp = book.createSpell(spell);
	if (tmp)
		tmp->launch(target);
}
