/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:50 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 14:14:34 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const & name, std::string const & title ) :
	name(name), title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

void Warlock::clearSpellBook()
{
	iterator ite = book.end();
	for (iterator it = book.begin(); it != ite; it++ )
		delete (it->second);
	book.erase(book.begin(), book.end());
}

Warlock::~Warlock( void )
{
	clearSpellBook();
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
		book.insert( Spell(newSpell->getName(), newSpell->clone()) );
}

void Warlock::forgetSpell( std::string const & spell)
{
	iterator it = book.find(spell);
	if (it != book.end())
	{
		delete it->second;
		book.erase(it);
	}
}

void Warlock::launchSpell( std::string const & spell, ATarget const & target)
{
	iterator it = book.find(spell);
	if (it != book.end())
		it->second->launch(target);
}
