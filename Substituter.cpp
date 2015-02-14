//--------------------------------------------------------------------------
#include "Substituter.h"
#include <iostream>
//--------------------------------------------------------------------------
std::string Substituter::Substitute(std::string word,Key key)
{
	std::string ret = "";
	for (int i = 0; i < word.size(); i++)
	{
		std::string c = key.GetCypher(std::string(1,word[i]));
		ret += c;
	}
	return ret;
}
//--------------------------------------------------------------------------
//EOF
