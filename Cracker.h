//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include "NGramParser.h"
#include "Key.h"
#include "AbstractKeyCreator.h"
#include "AbstractKeyChanger.h"
#include "AbstractMeassuring.h"
//--------------------------------------------------------------------------
class Cracker
{
	private: 
		bool AssertKey(Key);
	public:
		void Crack(std::string cypherText,AbstractKeyCreator* keyCreator, AbstractKeyChanger* keyChanger,AbstractMeassuring *meassure);


};
//--------------------------------------------------------------------------
//EOF
