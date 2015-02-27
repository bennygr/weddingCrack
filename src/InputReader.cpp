#include <fstream>
#include <sstream>
#include "InputReader.h"

size_t InputReader::ReadFromFile(std::string fileName)
{
	std::ifstream file(fileName.c_str());
	std::stringstream stringBuffer;
	stringBuffer << file.rdbuf();
	content = stringBuffer.str();
	file.close();
	return content.length();
}
std::string InputReader::GetContent()
{
	return content;
}
