//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include "QuadgramParser.h"
#include "Key.h"
#include "RandomKeyCreator.h"
//--------------------------------------------------------------------------
class Cracker
{
	public:
		void Crack(std::string cryptedContent,AbstractKeyCreator* keyCreator);
		void PrintKey(Key* key);


};
//--------------------------------------------------------------------------
//EOF
