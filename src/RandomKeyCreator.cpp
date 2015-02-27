//--------------------------------------------------------------------------
#include "RandomKeyCreator.h"
#include "KeyRandomizer.h"
#include <random>
#include <iostream>
#include <vector>
//--------------------------------------------------------------------------
bool RandomKeyCreator::MapHasValue(std::map<std::string,std::string> map, std::string value)
{
	std::map<std::string,std::string>::iterator it;
	for (it = map.begin(); it != map.end(); ++it )
	{		
		if(it->second == value)
			return true;
	}
	return false;
}


Key RandomKeyCreator::CreateKey(std::map<std::string,std::string> preset)
{
	std::vector<std::string> alphabet;
	alphabet.push_back("A");
	alphabet.push_back("B");
	alphabet.push_back("C");
	alphabet.push_back("D");
	alphabet.push_back("E");
	alphabet.push_back("F");
	alphabet.push_back("G");
	alphabet.push_back("H");
	alphabet.push_back("I");
	alphabet.push_back("J");
	alphabet.push_back("K");
	alphabet.push_back("L");
	alphabet.push_back("M");
	alphabet.push_back("N");
	alphabet.push_back("O");
	alphabet.push_back("P");
	alphabet.push_back("Q");
	alphabet.push_back("R");
	alphabet.push_back("S");
	alphabet.push_back("T");
	alphabet.push_back("U");
	alphabet.push_back("V");
	alphabet.push_back("W");
	alphabet.push_back("X");
	alphabet.push_back("Y");
	alphabet.push_back("Z");

	std::vector<std::string> availAlphabet = alphabet;

	for(std::vector<std::string>::iterator it = availAlphabet.begin();
		                                   it != availAlphabet.end();)
	{
		if(MapHasValue(preset,*it))
		{
			it = availAlphabet.erase(it);
		}
		else
		{
			it++;
		}
	}

	Key key;
	for(int i = 0; i < alphabet.size(); i++)
	{
		if(preset.find(alphabet[i]) != preset.end())
			key.SetSecond(alphabet[i],preset[alphabet[i]]);
		else
		{
			std::string last = availAlphabet.back();
			key.SetSecond(alphabet[i],last);
			availAlphabet.pop_back();
		}
	}
	return key;

	//if(preset.find("A") != preset.end())
	//	key.SetSecond("A",preset["A"]);
	//else 
	//	key.SetSecond("A","A");

	//if(preset.find("B") != preset.end())
	//	key.SetSecond("B",preset["B"]);
	//else 
	//	key.SetSecond("B","B");

	//if(preset.find("C") != preset.end())
	//	key.SetSecond("C",preset["C"]);
	//else 
	//	key.SetSecond("C","C");

	//if(preset.find("D") != preset.end())
	//	key.SetSecond("D",preset["D"]);
	//else 
	//	key.SetSecond("D","D");

	//if(preset.find("E") != preset.end())
	//	key.SetSecond("E",preset["E"]);
	//else 
	//	key.SetSecond("E","E");

	//if(preset.find("F") != preset.end())
	//	key.SetSecond("F",preset["F"]);
	//else 
	//	key.SetSecond("F","F");

	//if(preset.find("G") != preset.end())
	//	key.SetSecond("G",preset["G"]);
	//else 
	//	key.SetSecond("G","G");

	//if(preset.find("H") != preset.end())
	//	key.SetSecond("H",preset["H"]);
	//else 
	//	key.SetSecond("H","H");

	//if(preset.find("I") != preset.end())
	//	key.SetSecond("I",preset["I"]);
	//else 
	//	key.SetSecond("I","I");

	//if(preset.find("J") != preset.end())
	//	key.SetSecond("J",preset["J"]);
	//else 
	//	key.SetSecond("J","J");

	//if(preset.find("K") != preset.end())
	//	key.SetSecond("K",preset["K"]);
	//else 
	//	key.SetSecond("K","K");

	//if(preset.find("L") != preset.end())
	//	key.SetSecond("L",preset["L"]);
	//else 
	//	key.SetSecond("L","L");

	//if(preset.find("M") != preset.end())
	//	key.SetSecond("M",preset["M"]);
	//else 
	//	key.SetSecond("M","M");

	//if(preset.find("N") != preset.end())
	//	key.SetSecond("N",preset["N"]);
	//else 
	//	key.SetSecond("N","N");

	//if(preset.find("O") != preset.end())
	//	key.SetSecond("O",preset["O"]);
	//else 
	//	key.SetSecond("O","O");

	//if(preset.find("P") != preset.end())
	//	key.SetSecond("P",preset["P"]);
	//else 
	//	key.SetSecond("P","P");

	//if(preset.find("Q") != preset.end())
	//	key.SetSecond("Q",preset["Q"]);
	//else 
	//	key.SetSecond("Q","Q");

	//if(preset.find("R") != preset.end())
	//	key.SetSecond("R",preset["R"]);
	//else 
	//	key.SetSecond("R","R");

	//if(preset.find("S") != preset.end())
	//	key.SetSecond("S",preset["S"]);
	//else 
	//	key.SetSecond("S","S");

	//if(preset.find("T") != preset.end())
	//	key.SetSecond("T",preset["T"]);
	//else 
	//	key.SetSecond("T","T");
	//
	//if(preset.find("U") != preset.end())
	//	key.SetSecond("U",preset["U"]);
	//else 
	//	key.SetSecond("U","U");
	//
	//if(preset.find("V") != preset.end())
	//	key.SetSecond("V",preset["V"]);
	//else 
	//	key.SetSecond("V","V");
	//
	//if(preset.find("W") != preset.end())
	//	key.SetSecond("W",preset["W"]);
	//else 
	//	key.SetSecond("W","W");

	//if(preset.find("X") != preset.end())
	//	key.SetSecond("X",preset["X"]);
	//else 
	//	key.SetSecond("X","X");

	//if(preset.find("Y") != preset.end())
	//	key.SetSecond("Y",preset["Y"]);
	//else 
	//	key.SetSecond("Y","Y");

	//if(preset.find("Z") != preset.end())
	//	key.SetSecond("Z",preset["Z"]);
	//else 
	//	key.SetSecond("Z","Z");

	//KeyRandomizer randomizer;
	//for(int i=0; i < 500; i++)
	//{
	//	key = randomizer.Randomize(key,preset);
	//}
	//return key;
}

//--------------------------------------------------------------------------
//EOF
