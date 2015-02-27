//--------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "InputReader.h"
#include "Key.h"
#include "Substituter.h"
#include "Cracker.h"
#include "SimpleQuadgramMeassuring.h"
#include "RandomKeyCreator.h"
#include "RandomKeyChanger.h"
#include "NGramDictionary.h"
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
	std::cout << "Cracking text:" << std::endl;
	std::cout << cypherText << std::endl;
	std::cout << "Let's go! ..." << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	NGramDictionary dict("german_quadgrams.txt");
	dict.Load();
	AbstractKeyCreator *keyCreator = new RandomKeyCreator();
	AbstractKeyChanger *keyChanger = new RandomKeyChanger();
	AbstractMeassuring *meassure = new SimpleQuadgramMeassuring(&dict);
	Cracker cracker;
	cracker.Crack(cypherText,keyCreator,keyChanger,meassure);

	return 0;
}
//--------------------------------------------------------------------------
//EOF
