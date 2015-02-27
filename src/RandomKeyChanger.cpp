//--------------------------------------------------------------------------
#include <random>
#include <iostream>
#include "RandomKeyChanger.h"
#include "KeyRandomizer.h"
#include <string>
#include <vector> 
//--------------------------------------------------------------------------
Key RandomKeyChanger::GetNextKey(Key key,std::map<std::string,std::string> preset)
{
	KeyRandomizer randomizer;
	return randomizer.Randomize(key,preset);
}
//--------------------------------------------------------------------------
//EOF
