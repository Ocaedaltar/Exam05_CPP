/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlormois <mlormois@studient.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:48:22 by mlormois          #+#    #+#             */
/*   Updated: 2022/02/16 16:13:35 by mlormois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"

# include <map>
# include <iterator>

class TargetGenerator
{
public:
	typedef typename std::pair<std::string, ATarget*>	Target;
	typedef typename std::map<std::string, ATarget*>	ListTarget;
	typedef ListTarget::iterator Iterator;

private:
	ListTarget liste;

	void clearListTarget(void);

public:
	TargetGenerator( void );
	TargetGenerator( TargetGenerator const & cpy );
	TargetGenerator &operator=( TargetGenerator const & other );
	~TargetGenerator();

	void learnTargetType(ATarget* newTarget);
	void forgetTargetType(std::string const & target);
	ATarget* createTarget(std::string const & target);

};

#endif
