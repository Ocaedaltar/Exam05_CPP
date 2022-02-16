/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:00:43 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 16:14:43 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void )
{}

TargetGenerator::~TargetGenerator()
{
	clearListTarget();
}

void TargetGenerator::clearListTarget(void)
{
	Iterator ite = liste.end();
	for (Iterator it = liste.begin(); it != ite; it++ )
		delete (it->second);
	liste.erase(liste.begin(), liste.end());
}

TargetGenerator::TargetGenerator( TargetGenerator const & cpy )
{
	*this = cpy;
}

TargetGenerator &TargetGenerator::operator=( TargetGenerator const & other )
{
	ListTarget otherListe = other.liste;
	Iterator it = otherListe.begin();
	Iterator ite = otherListe.end();
	while (it != ite)
	{
		liste.insert( Target( it->first, it->second->clone()));
		it++;
	}
	return *this;
}

void TargetGenerator::learnTargetType(ATarget* newTarget)
{
	liste.insert( Target(newTarget->getType(), newTarget->clone()) );
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
	Iterator it = liste.find(target);
	if (it != liste.end())
	{
		delete it->second;
		liste.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(std::string const & target)
{
	Iterator it = liste.find(target);
	if (it != liste.end())
		return (it->second);
	return NULL;
}