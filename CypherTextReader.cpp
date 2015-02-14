//--------------------------------------------------------------------------
#include "CypherTextReader.h"
#include <fstream>
#include <iostream>
//--------------------------------------------------------------------------

size_t CypherTextReader::Read()
{
	std::ifstream file(this->fileName.c_str());
	std::string line;
	while(!file.eof())
	{
		getline(file, line);
		line.erase(line.find_last_not_of(" \n\r\t")+1);
		this->content.push_back(line);
	}
	file.close();
	return content.size();
}

std::string CypherTextReader::GetNextLine()
{
	if(pos <= content.size())
		return content.at(pos++);
	return "";
}
size_t CypherTextReader::GetSize()
{
	return content.size();
}


//--------------------------------------------------------------------------
//EOF
