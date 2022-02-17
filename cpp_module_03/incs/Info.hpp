/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:25:37 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:54:57 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <string>
# include <iostream>

class Info
{
private:
	std::string name;
	std::string classe;
	std::string title;

	Info( void );

public:
	Info(std::string classe, std::string title = "The newbie");
	~Info( void);

	std::string const &getName( void ) const;
	std::string const &getClasse( void ) const;
	std::string const &getTitle( void ) const;

};

std::ostream& operator<<( std::ostream& os, Info const &info );

#endif