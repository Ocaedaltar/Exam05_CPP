/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AItem.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:00:29 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:08:11 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AITEM_HPP
# define AITEM_HPP

# include <string>
# include <iostream>

class AItem
{
protected:
	std::string	name;
	int			price;
	int			number;
	std::string	description;

private:
	AItem( void );
	AItem( AItem const & cpy );
	AItem &operator=( AItem const & other );

public:
	AItem( std::string name, int price, int number, std::string description );
	virtual ~AItem( void);

	// virtual void use( APersonnage const &user, ATarget const & target ) = 0;
	virtual AItem* clone( void ) const = 0;

	// void besold(APersonnage const &user, ATarget const & target );
	// void bebuy(APersonnage const &user, ATarget const & target );

	std::string const &getName( void ) const;
	std::string const &getDesc( void ) const;
	int const &getPrice( void ) const;
	int const &getNumber( void ) const;

	void printData( std::ostream& os ) const;

};


#endif