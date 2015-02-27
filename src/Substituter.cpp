//--------------------------------------------------------------------------
#include "Substituter.h"
#include <iostream>
//--------------------------------------------------------------------------
std::string Substituter::Substitute(std::string text,Key key)
{
	std::string ret = "";
	for (int i = 0; i < text.size(); i++)
	{
		std::string c = key.GetSecond(std::string(1,text[i]));
		if(c == "")
			ret += text[i];
		ret += c;
	}
	return ret;
}
//--------------------------------------------------------------------------
//EOF
