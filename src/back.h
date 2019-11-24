#pragma once
#include "TelloPro.h"

class Back: public TelloPro
{
public:
	Back();
	Back(int _value);
	
public:
	double get_delay();
};
