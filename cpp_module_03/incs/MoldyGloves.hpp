/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MoldyGloves.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:58:15 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 23:30:07 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOLDYGLOVES_HPP
# define MOLDYGLOVES_HPP

# include "AWeapon.hpp"

# define AD_MOLDYGLOVES 3
# define AP_MOLDYGLOVES 2
# define NAME_MOLDYGLOVES "Gants Moisi"
# define PRICE_MOLDYGLOVES 5
# define NUM_MOLDYGLOVES 1
# define DESC_MOLDYGLOVES "Une paire de gants moisi dans un grennier."

class MoldyGloves : public AWeapon
{
public:
	MoldyGloves(void);
	~MoldyGloves(void);

	virtual AItem* clone( void ) const;
};

#endif