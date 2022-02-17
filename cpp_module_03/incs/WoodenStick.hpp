/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WoodenStick.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:30:04 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 23:30:12 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOODENSTICK_HPP
# define WOODENSTICK_HPP

# include "AWeapon.hpp"

# define AD_WOODENSTICK 1
# define AP_WOODENSTICK 5
# define NAME_WOODENSTICK "Wooden Stick"
# define PRICE_WOODENSTICK 10
# define NUM_WOODENSTICK 1
# define DESC_WOODENSTICK "Une vielle branche tomber d'un arbre."

class WoodenStick : public AWeapon
{
public:
	WoodenStick(void);
	~WoodenStick(void);

	virtual AItem* clone( void ) const;
};

#endif