/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ButterKniffle.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:01:33 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 23:47:06 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUTTERKNIFFLE_HPP
# define BUTTERKNIFFLE_HPP

# include "AWeapon.hpp"

# define AD_BUTTERKNIFFLE 5
# define AP_BUTTERKNIFFLE 0
# define NAME_BUTTERKNIFFLE "Couteau a beurre"
# define PRICE_BUTTERKNIFFLE 10
# define NUM_BUTTERKNIFFLE 1
# define DESC_BUTTERKNIFFLE "Un petit couteau fait pour tartiner du beurre."


class ButterKniffle : public AWeapon
{
public:
	ButterKniffle(void);
	~ButterKniffle(void);

	virtual AItem* clone( void ) const;
};

#endif