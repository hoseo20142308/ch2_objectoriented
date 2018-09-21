#include <iostream>
#include "Song.h"
#include "HalfSale.h"
#include "NonDiscounted.h"
#include "OnSale.h"
#include "TodayEvent.h"

int main()
{
	Song s1, s2, s3, s4, s5;

	NonDiscounted nd;
	OnSale os;
	TodayEvent te;
	HalfSale hs;

	s1.setMode(new NonDiscounted);


}