/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:39:23 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 16:35:31 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

# include <map>
# include <iterator>

# include "ASpell.hpp"

class Warlock 
{
public:
	typedef typename std::pair<std::string, ASpell*> Spell;
	typedef typename std::map<std::string, ASpell*> SpellBook;
	typedef SpellBook::iterator iterator;

private:
	std::string name;
	std::string title;

	Warlock( void );
	Warlock( Warlock const & cpy );
	Warlock &operator=( Warlock const & other );

	void clearSpellBook();

	SpellBook book;

public:
	Warlock( std::string const & name, std::string const & title );
	~Warlock( void );

	void setTitle( std::string const & new_title );

	std::string const & getName( void ) const;
	std::string const & getTitle( void ) const;

	void introduce( void ) const;

	void learnSpell( ASpell * newSpell);
	void forgetSpell( std::string const & spell);
	void launchSpell( std::string const & spell, ATarget const & target);
};

#endif
