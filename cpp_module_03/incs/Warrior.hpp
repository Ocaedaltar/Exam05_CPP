/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:21:22 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:51:58 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_HPP
# define WARRIOR_HPP

# define HP_WARRIOR 150
# define EP_WARRIOR 300
# define MP_WARRIOR 0
# define AD_WARRIOR 30

# include "APersonnage.hpp"

class Warrior : public APersonnage
{
public:
	Warrior( void );
	~Warrior( void );
};

#endif
