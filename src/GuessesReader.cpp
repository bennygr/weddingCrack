#include <fstream>
#include "GuessesReader.h"

//--------------------------------------------------------------------------
void GuessesReader::Load()
{
	std::ifstream file(this->fileName.c_str());
	std::string line;
	while(!file.eof())
	{
		getline(file, line);
		line.erase(line.find_last_not_of(" \n\r\t")+1);
		std::size_t spaceIndex = line.find( "=", 0 );
		std::string first = line.substr(0,spaceIndex);
		std::string second = line.substr(spaceIndex+1);
		this->guesses[first] = second;
	}
	file.close();
}
std::map<std::string,std::string> GuessesReader::GetGuesses()
{
	return this->guesses;
}
//--------------------------------------------------------------------------
//EOF
