//--------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "CypherTextReader.h"
#include "Key.h"
#include "Dictionary.h"
#include "Substituter.h"
#include "Cracker.h"
//--------------------------------------------------------------------------


//--------------------------------------------------------------------------
int main(int argc, char** argv)
{
	CypherTextReader cr("input.txt");
	int cypherTextLength = cr.Read();
	if(cypherTextLength < 1)
	{
		std::cerr << "Error: No cypher text specified!" << std::endl;
		return -1;
	}
	std::cout << "Cypher text loaded: " << cypherTextLength << " words/lines" << std::endl;

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



	//Substituter subst;
	//std::string next = cr.GetNextLine();
	//std::string su = subst.Substitute(next,key);
	//std::cout << "SU: " << su << std::endl;
	
	Cracker cracker;
	cracker.Crack(cr);


	//std::cout << key.GetCypher("C") << std::endl;
	//std::cout << key.GetPlain("f") << std::endl;

	return 0;
}
//--------------------------------------------------------------------------
//EOF
