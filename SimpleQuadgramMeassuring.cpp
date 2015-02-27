#include "SimpleQuadgramMeassuring.h"
#include "NGramParser.h"
#include <cmath>
#include <iostream>
double SimpleQuadgramMeassuring::Meassure(std::string text)
{
	NGramParser ngramParser;
	ngramParser.Parse(text);
	std::vector<std::string> ngrams = ngramParser.GetNGrams();
	double sum = 0;
	for(std::string ngram  : ngrams)
	{
		double v  = this->dict->GetValueForWord(ngram);
		sum += v;
	}
	return sum;
}
