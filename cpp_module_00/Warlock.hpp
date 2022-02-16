/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:39:23 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/15 15:56:45 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock 
{
private:
	std::string name;
	std::string title;

	Warlock( void );
	Warlock( Warlock const & cpy );
	Warlock &operator=( Warlock const & other );

public:
	Warlock( std::string const & name, std::string const & title );
	~Warlock( void );

	void setTitle( std::string const & new_title );

	std::string const & getName( void ) const;
	std::string const & getTitle( void ) const;

	void introduce( void ) const;
};

#endif