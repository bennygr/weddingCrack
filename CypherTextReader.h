//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <vector>
//--------------------------------------------------------------------------

class CypherTextReader
{
	private:
		std::string fileName;
		std::vector<std::string> content;
		int pos;

	public:
		CypherTextReader(std::string fileName)
		{
			this->fileName = fileName;
			this->pos = 0;
		}
		size_t Read();
		size_t GetSize();
		std::string GetAll();
		std::string GetNextLine();
};

//--------------------------------------------------------------------------
//EOF
