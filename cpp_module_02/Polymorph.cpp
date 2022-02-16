#include "Polymorph.hpp"

Polymorph::Polymorph( void ) :
	ASpell( "Polymorph", "turned into a critter")
{}

Polymorph::~Polymorph()
{
}

ASpell* Polymorph::clone() const
{
	return (new Polymorph());
}
