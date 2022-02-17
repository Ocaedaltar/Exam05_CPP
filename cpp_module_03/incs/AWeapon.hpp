/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:57:58 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 23:53:32 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include "AItem.hpp"

class AWeapon : public AItem
{
private:
	int damage;
	int puissance;

	AWeapon( void );
	AWeapon( AWeapon const & cpy );
	AWeapon &operator=( AWeapon const & other );

public:
	AWeapon( int ad, int ap, std::string name, int price, int number, std::string description);
	virtual ~AWeapon( void );

	// virtual void use( APersonnage const &user, ATarget const & target ) = 0;
	virtual AItem* clone( void ) const = 0;
};

std::ostream& operator<<( std::ostream& os, AWeapon const &arme );

#endif