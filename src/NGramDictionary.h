//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include <string>
#include <map>
//--------------------------------------------------------------------------

class NGramDictionary
{
	private:
		std::string fileName;
		std::map<std::string,double> ngrams;
	public:
		NGramDictionary (std::string fileName)
		{
			this->fileName = fileName;
		}

		void Load();
		void Print();
		double GetValueForWord(std::string word);
		size_t GetSize();
};

//--------------------------------------------------------------------------
//EOF
