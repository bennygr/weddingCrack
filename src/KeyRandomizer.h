#pragma once

#include "Key.h"
#include <map>

class KeyRandomizer
{
	private:
		int Random(int max);
	public:
		Key Randomize(Key key,std::map<std::string,std::string> preset);
};
