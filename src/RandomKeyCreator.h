//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include "AbstractKeyCreator.h"
#include <map>
//--------------------------------------------------------------------------

class RandomKeyCreator : public AbstractKeyCreator
{
	private:
	    bool MapHasValue(std::map<std::string,std::string> map, std::string value);
		void RandomizeKey(Key* key,std::map<std::string,std::string> preset);
		int Random(int max);
	public:
		virtual Key CreateKey(std::map<std::string,std::string> preset);
};
//--------------------------------------------------------------------------
//EOF
