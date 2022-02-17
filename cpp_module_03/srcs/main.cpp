/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:45:13 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:34:13 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

	// else if (ac == 2)
	// { // RECUPERATION DU FICHIER DE SAUVEGARDE: .DD
		
	// }

int main( int ac, char **av)
{
	(void)av;
	if (ac == 1) // INIT D'UN NOUVEAU HERO
		init_game();
	else
		return print_error("Too Many Arguments");
	return 0;
}