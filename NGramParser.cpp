//--------------------------------------------------------------------------
#include "NGramParser.h"
#include <fstream>
#include <iostream>
#include <sstream>
//--------------------------------------------------------------------------

size_t NGramParser::Parse(std::string content)
{
	for(std::string::size_type i = 0; i < content.size()-size; i++) 
	{
		std::string quadgram = content.substr(i,size);
		this->quadgrams.push_back(quadgram);
	}
	return content.size();
}

size_t NGramParser::GetSize()
{
	return quadgrams.size();
}

std::vector<std::string> NGramParser::GetNGrams()
{
	return this->quadgrams;
}
//--------------------------------------------------------------------------
//EOF
