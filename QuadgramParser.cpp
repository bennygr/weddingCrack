//--------------------------------------------------------------------------
#include "QuadgramParser.h"
#include <fstream>
#include <iostream>
#include <sstream>
//--------------------------------------------------------------------------

size_t QuadgramParser::Parse(std::string content)
{
	for(std::string::size_type i = 0; i < content.size()-size; ++i) 
	{
		std::string quadgram = content.substr(i,size);
		std::cout << quadgram << std::endl;
		this->quadgrams.push_back(quadgram);
	}
	return content.size();
}

size_t QuadgramParser::GetSize()
{
	return quadgrams.size();
}
//--------------------------------------------------------------------------
//EOF
