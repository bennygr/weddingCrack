//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include "Key.h"
//--------------------------------------------------------------------------

class AbstractKeyChanger
{
	public:
		virtual Key GetNextKey(Key key,std::map<std::string,std::string> preset) = 0;
};
//--------------------------------------------------------------------------
//EOF
