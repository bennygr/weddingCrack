#include "Dictionary.h"
#include <fstream>
#include <iostream>
#include <algorithm>
//--------------------------------------------------------------------------

void Dictionary::Load()
{
	//TODO: this should use wstring and not string for unicode support
	std::ifstream file(this->fileName.c_str());
	std::string line;
	while(!file.eof())
	{
		getline(file, line);
		line.erase(line.find_last_not_of(" \n\r\t")+1);
		this->dictionary.push_back(line);
	}
	file.close();
}
void Dictionary::Print() { }

bool Dictionary::HasWord(std::string word)
{
	std::vector<std::string>::iterator found;
	found = find(dictionary.begin(),dictionary.end(),word);
	if(found != dictionary.end())
		return true;
	return false;
}
size_t Dictionary::GetSize()
{
	return dictionary.size();
}

//--------------------------------------------------------------------------
//EOF
