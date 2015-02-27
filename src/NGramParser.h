//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <vector>
//--------------------------------------------------------------------------

class NGramParser
{
	private:
		int size;
		std::vector<std::string> quadgrams;

	public:
		NGramParser()
		{
			this->size = 4;
		}

		NGramParser(int size)
		{
			this->size = size;
		}

		size_t Parse(std::string content);
		size_t GetSize();
		std::vector<std::string> GetNGrams();
};

//--------------------------------------------------------------------------
//EOF
