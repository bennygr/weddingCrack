#pragma once
//--------------------------------------------------------------------------
#include "AbstractKeyCreator.h"
//--------------------------------------------------------------------------
class RandomKeyCreator : public AbstractKeyCreator
{
	private:
		int random(int max);
	public:
		virtual Key* GetNextKey(Key* currentKey);
};
//--------------------------------------------------------------------------
//EOF
