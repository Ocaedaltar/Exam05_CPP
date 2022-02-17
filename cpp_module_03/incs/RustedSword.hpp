/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RustedSword.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:46:34 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 21:48:50 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSTEDSWORD_HPP
# define RUSTEDSWORD_HPP

# include "AWeapon.hpp"

# define AD_RUSTEDSWORD 5
# define AP_RUSTEDSWORD 0
# define NAME_RUSTEDSWORD "Epee Rouillee"
# define PRICE_RUSTEDSWORD 10
# define NUM_RUSTEDSWORD 1
# define DESC_RUSTEDSWORD "Une vielle Epee rouillee sous la pluie."

class RustedSword : public AWeapon
{
public:
	RustedSword(void);
	~RustedSword(void);

	virtual AItem* clone( void ) const;
};

#endif