/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:03:27 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 14:12:18 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>

# include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;

public:
	ASpell( void );
	ASpell( std::string const &name, std::string const & effects );
	ASpell( ASpell const & cpy );
	virtual ~ASpell( void );

	ASpell &operator=( ASpell const & other );
	virtual ASpell *clone( void ) const = 0;

	std::string const & getName( void ) const;
	std::string const & getEffects( void ) const;

	void launch( ATarget const & target );
};

#endif
