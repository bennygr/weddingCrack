#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <iostream>
#include <map>
//--------------------------------------------------------------------------
class GuessesReader
{
	private:
		std::string fileName;
		std::map<std::string,std::string> guesses;
	public:
		GuessesReader (std::string fileName)
		{
			this->fileName = fileName;
		}

		void Load();
		std::map<std::string,std::string> GetGuesses();
};
//--------------------------------------------------------------------------
//EOF
