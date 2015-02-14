//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <vector>
//--------------------------------------------------------------------------

class Dictionary
{
	private:
		std::string fileName;
		std::vector<std::string> dictionary;
	public:
		Dictionary (std::string fileName)
		{
			this->fileName = fileName;
		}

		void Load();
		void Print();
		bool HasWord(std::string word);
		size_t GetSize();
};

//--------------------------------------------------------------------------
//EOF
