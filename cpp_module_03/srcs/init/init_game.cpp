/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:38:32 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/17 00:32:01 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

static void select_personnage_screen()
{
	std::cout << "Selectionne la classe de ton choix: " << std::endl;
}

static void welcome_screen()
{
	std::cout << "Bienvenue dans mon Jeu: " << std::endl;
}

static APersonnage *generatePlayer()
{
	unsigned int choice = 0;

	while (choice > 4 || choice < 1)
	{
		select_personnage_screen();
		std::cin >> choice;
	}
	switch(choice)
	{
		case 1: return (new Warrior());
		case 2: return (new Mage());
		case 3: return (new Monk());
		case 4: return (new Rogue());
	}
	return NULL;
}

void init_game( void )
{
	welcome_screen();
	APersonnage *player = generatePlayer();
	std::cout << *player << std::endl;

	delete player;
}