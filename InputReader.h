#pragma once
//--------------------------------------------------------------------------
#include <string>
//--------------------------------------------------------------------------
class InputReader
{
	std::string content;
	public:
		size_t ReadFromFile(std::string fileName);
		std::string GetContent();
};
//--------------------------------------------------------------------------
