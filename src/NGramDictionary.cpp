#include "NGramDictionary.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

//--------------------------------------------------------------------------

void NGramDictionary::Load()
{
	std::ifstream file(this->fileName.c_str());
	std::string line;
	while(!file.eof())
	{
		getline(file, line);
		line.erase(line.find_last_not_of(" \n\r\t")+1);
		std::size_t spaceIndex = line.find( " ", 0 );
		std::string ngram = line.substr(0,spaceIndex);
		std::string value = line.substr(spaceIndex+1);

		//convert ngram value to a double
		std::stringstream ss;
		double fValue;;
		ss<<value;;
		ss>>fValue;;

		//Save it
		this->ngrams[ngram] = fValue;
	}
	file.close();
	
	//Precalculating meeasuring
	std::map<std::string,double>::iterator iter;
	std::map<std::string,double> newMap;
	for(iter = ngrams.begin(); iter != ngrams.end(); iter++ )
	{
		newMap[iter->first] = log10(iter->second / ngrams.size());
	}

	this->ngrams = newMap;
}

void NGramDictionary::Print() 
{ 
	std::map<std::string,double>::iterator iter;
	for(iter = ngrams.begin(); iter != ngrams.end(); iter++ )
	{
		std::cout << iter->first 
			      << ": "
				  << iter->second
				  << std::endl;
	}
}

size_t NGramDictionary::GetSize()
{
	return ngrams.size();
}

double NGramDictionary::GetValueForWord(std::string word)
{

	if(ngrams.find(word) != ngrams.end())
		return ngrams[word];
	return log10(0.01/ ngrams.size());
}

//--------------------------------------------------------------------------
//EOF
