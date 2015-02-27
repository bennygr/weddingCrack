#pragma once
//--------------------------------------------------------------------------
#include "AbstractKeyChanger.h"
#include "Key.h"
#include <map>
//--------------------------------------------------------------------------
class RandomKeyChanger : public AbstractKeyChanger
{
	public:
		virtual Key GetNextKey(Key key,std::map<std::string,std::string> preset);
};
//--------------------------------------------------------------------------
//EOF
