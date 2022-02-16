#include "ASpell.hpp"

ASpell::ASpell( void ) {}

ASpell::ASpell( std::string const &name, std::string const & effects ) :
	name(name), effects(effects)
{}

ASpell::ASpell( ASpell const & cpy )
{
	*this = cpy;
}

ASpell::~ASpell( void ) {}

ASpell &ASpell::operator=( ASpell const & other )
{
	name = other.getName();
	effects = other.getEffects();
	return *this;
}

std::string const & ASpell::getName( void ) const
{
	return name;
}

std::string const & ASpell::getEffects( void ) const
{
	return effects;
}

void ASpell::launch( ATarget const & target )
{
	target.getHitBySpell(*this);
}
