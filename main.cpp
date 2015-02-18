//--------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "InputReader.h"
#include "QuadgramParser.h"
#include "Key.h"
#include "Dictionary.h"
#include "Substituter.h"
#include "Cracker.h"
//--------------------------------------------------------------------------


//--------------------------------------------------------------------------
int main(int argc, char** argv)
{
	InputReader inputReader;
	int cypherTextLength = inputReader.ReadFromFile("input.txt");
	std::string cypherText = inputReader.GetContent();
	if(cypherTextLength == 0)
	{
		std::cerr << "Error: No cypher text specified!" << std::endl;
		return -1;
	}

	std::cout << "Cypher text loaded: " << cypherTextLength << " characters" << std::endl;
	std::string dictName = "german.dict";
	Dictionary dict("german.dic");
	std::cout << "Loading dictionary " << 
				 dictName << 
				 " ... " <<
				 std::endl;
	dict.Load();
	std::cout << "Dictionary loaded: " << 
				 dict.GetSize() << 
				 " words " << 
				 std::endl;
	std::cout << "-------------------------------------" << std::endl;

	
	AbstractKeyCreator *keyCreator = new RandomKeyCreator();
	Cracker cracker;
	cracker.Crack(cypherText,keyCreator);

	return 0;
}
//--------------------------------------------------------------------------
//EOF
