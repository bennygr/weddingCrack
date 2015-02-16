//--------------------------------------------------------------------------
#include "Cracker.h"
#include "Key.h"
#include <iostream>
#include "Substituter.h"
//--------------------------------------------------------------------------
void Cracker::Crack(CypherTextReader cr,AbstractKeyCreator* keyCreator)
{
	Key *key = new Key();
	key->AddLetter("A","A");
	key->AddLetter("B","B");
	key->AddLetter("C","C");
	key->AddLetter("D","D");
	key->AddLetter("E","E");
	key->AddLetter("F","F");
	key->AddLetter("G","G");
	key->AddLetter("H","H");
	key->AddLetter("I","I");
	key->AddLetter("J","J");
	key->AddLetter("K","K");
	key->AddLetter("L","L");

	key = keyCreator->GetNextKey(key);

	std::string word = "";
	Substituter subst;
	while((word = cr.GetNextLine()) != "")
	{
		std::string sWord = subst.Substitute(word,*key);
		std::cout << word 
			      << " = "
				  << sWord
				  << std::endl;
	}
}
//--------------------------------------------------------------------------
//EOF
