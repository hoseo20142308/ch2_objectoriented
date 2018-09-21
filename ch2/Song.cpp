#include "Song.h"

Song::Song()
{
}


Song::~Song()
{
}

void Song::setMode(DiscountedMode *mode)
{
	this->mode = *mode;
}

double Song::getPrice()
{
	return 10.0 - (10.0 * this->mode.getDiscountRate());
}
