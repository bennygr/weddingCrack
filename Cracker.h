//--------------------------------------------------------------------------
#pragma once
//--------------------------------------------------------------------------
#include "CypherTextReader.h"
#include "Key.h"
#include "RandomKeyCreator.h"
//--------------------------------------------------------------------------
class Cracker
{
	public:
		void Crack(CypherTextReader cr,AbstractKeyCreator* keyCreator);
};
//--------------------------------------------------------------------------
//EOF
