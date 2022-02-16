/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:08:09 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 15:52:44 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include <iterator>
# include "ASpell.hpp"

class SpellBook
{
public:
	typedef typename std::pair<std::string, ASpell*>	Spell;
	typedef typename std::map<std::string, ASpell*>		Grimoire;
	typedef Grimoire::iterator iterator;

private:
	void clearSpellBook();
	SpellBook( SpellBook const & cpy );
	SpellBook &operator=( SpellBook const & other );
	
	Grimoire book;

public:
	SpellBook( void );
	~SpellBook();

	void learnSpell(ASpell* newSpell);
	void forgetSpell(std::string const &);
	ASpell* createSpell(std::string const &);
};

#endif
