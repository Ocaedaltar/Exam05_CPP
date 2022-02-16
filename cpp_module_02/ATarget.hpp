/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:19:18 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 14:12:10 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string type;

public:
	ATarget( void );
	ATarget( std::string const & type );
	ATarget( ATarget const & cpy );
	virtual ~ATarget( void );

	ATarget &operator=( ATarget const & other );
	virtual ATarget *clone( void ) const = 0;

	std::string const &getType( void ) const;

	void getHitBySpell( ASpell const & spell ) const;
};

#endif
