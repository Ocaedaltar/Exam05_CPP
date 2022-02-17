/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rogue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:48:15 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 20:49:10 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROGUE_HPP
# define ROGUE_HPP

# define HP_ROGUE 100
# define EP_ROGUE 200
# define MP_ROGUE 100
# define AD_ROGUE 20

# include "APersonnage.hpp"

class Rogue : public APersonnage
{
public:
	Rogue( void );
	~Rogue( void );
};

#endif