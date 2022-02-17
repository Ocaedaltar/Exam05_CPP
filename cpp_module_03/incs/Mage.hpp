/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mage.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:01:38 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 19:52:09 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGE_HPP
# define MAGE_HPP

# define HP_MAGE 70
# define EP_MAGE 100
# define MP_MAGE 200
# define AD_MAGE 5

# include "APersonnage.hpp"

class Mage : public APersonnage
{
public:
	Mage( void );
	~Mage( void );
};

#endif
