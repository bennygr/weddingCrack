#pragma once
//--------------------------------------------------------------------------
#include "AbstractMeassuring.h"
#include "NGramDictionary.h"
//--------------------------------------------------------------------------
class SimpleQuadgramMeassuring : public AbstractMeassuring
{
	private:
		NGramDictionary* dict;
	public:
		SimpleQuadgramMeassuring(NGramDictionary* dict)
		{
			this->dict = dict;
		}
		virtual double Meassure(std::string text);
};
//--------------------------------------------------------------------------
//EOF
