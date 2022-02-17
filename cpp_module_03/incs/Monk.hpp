/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Monk.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:02:59 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:51:56 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MONK_HPP
# define MONK_HPP

# define HP_MONK 150
# define EP_MONK 150
# define MP_MONK 150
# define AD_MONK 15

# include "APersonnage.hpp"

class Monk : public APersonnage
{
public:
	Monk( void );
	~Monk( void );
};

#endif