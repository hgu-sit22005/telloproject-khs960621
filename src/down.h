#pragma once
#include "TelloPro.h"

class Down: public TelloPro
{
public:
	Down();
	Down(int _value);
	
public:
	double get_delay();
};
