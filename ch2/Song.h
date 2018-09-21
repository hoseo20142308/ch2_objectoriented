#pragma once
#include "DiscountedMode.h"

class Song
{
private:
	DiscountedMode mode;
public:
	Song();
	~Song();
	void setMode(DiscountedMode *mode);
	double getPrice();
};

