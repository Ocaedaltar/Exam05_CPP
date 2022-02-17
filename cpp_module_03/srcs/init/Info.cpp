/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:26:26 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:54:18 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

Info::Info(std::string classe, std::string title) : 
	classe(classe), title(title)
{
	std::string choice;
	std::cin >> choice;
	name = choice;
}

Info::~Info( void ) {}

std::string const &Info::getName( void ) const
{
	return name;
}

std::string const &Info::getClasse( void ) const
{
	return classe;
}

std::string const &Info::getTitle( void ) const
{
	return title;
}

std::ostream& operator<<( std::ostream& os, Info const &info )
{
	os << info.getTitle() << " " << info.getClasse() << " " << info.getName() << std::endl;
	return os;
}