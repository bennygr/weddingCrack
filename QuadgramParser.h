//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <vector>
//--------------------------------------------------------------------------

class QuadgramParser
{
	private:
		int size;
		std::vector<std::string> quadgrams;

	public:
		QuadgramParser()
		{
			this->size = 4;
		}

		QuadgramParser(int size)
		{
			this->size = size;
		}

		size_t Parse(std::string content);
		size_t GetSize();
};

//--------------------------------------------------------------------------
//EOF
