/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:34:18 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 20:50:07 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include <string>
# include <iostream>

# include "Warrior.hpp"
# include "Mage.hpp"
# include "Monk.hpp"
# include "Rogue.hpp"


# include "APersonnage.hpp"

// UTILS //
int print_error(std::string msg);

//INIT//
void init_game( void );

#endif