//--------------------------------------------------------------------------
#include "Cracker.h"
#include "Key.h"
#include <iostream>
#include "Substituter.h"
//--------------------------------------------------------------------------
void Cracker::Crack(std::string cryptedContent,AbstractKeyCreator* keyCreator)
{
	//Initial Key
	Key *key = new Key();
	key->SetLetter("A","A");
	key->SetLetter("B","B");
	key->SetLetter("C","C");
	key->SetLetter("D","D");
	key->SetLetter("E","E");
	key->SetLetter("F","F");
	key->SetLetter("G","G");
	key->SetLetter("H","H");
	key->SetLetter("I","I");
	key->SetLetter("J","J");
	key->SetLetter("K","K");
	key->SetLetter("L","L");


	//1) encrypt text
	//2) parse quadgrams
	//3) meassure result
	QuadgramParser quadgramParser;
	int quadgramCount = quadgramParser.Parse(cryptedContent);
	std::cout << quadgramCount << " quadgrams parsed." << std::endl;

	for(int i = 0; i<2000;i++)
	{
		//key = keyCreator->GetNextKey(key);
		//std::cout << key->ToString() << std::endl;
		//std::string word = "";
		//Substituter subst;
		//while((word = cr.GetNextLine()) != "")
		//{
		//	std::string sWord = subst.Substitute(word,*key);
		//	std::cout << sWord << std::endl;
		//}
		//cr.Reset();
	}

}
//--------------------------------------------------------------------------
//EOF
