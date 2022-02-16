/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:46:07 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 15:46:51 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

void SpellBook::clearSpellBook()
{
	iterator ite = book.end();
	for (iterator it = book.begin(); it != ite; it++ )
		delete (it->second);
	book.erase(book.begin(), book.end());
}

SpellBook::SpellBook( void )
{}

SpellBook::~SpellBook()
{
	clearSpellBook();
}

void SpellBook::learnSpell(ASpell* newSpell)
{
	book.insert( Spell(newSpell->getName(), newSpell->clone()) );
}

void SpellBook::forgetSpell(std::string const &spell)
{
	iterator it = book.find(spell);
	if (it != book.end())
	{
		delete it->second;
		book.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
	iterator it = book.find(spell);
	if (it != book.end())
		return (it->second);
	return (NULL);
}
