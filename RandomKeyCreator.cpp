//--------------------------------------------------------------------------
#include <random>
#include "RandomKeyCreator.h"
#include <iostream>
//--------------------------------------------------------------------------
Key* RandomKeyCreator::GetNextKey(Key* currentKey)
{
	//Swap to random key-letters
	int len = currentKey->GetLength();
	int first = random(len);
	int second = random(len);
	std::string cFirst = currentKey->GetCypher(first);
	std::string cSecond = currentKey->GetCypher(second);
	currentKey->SetLetter(first,cSecond);
	currentKey->SetLetter(second,cFirst);

	return currentKey;
}

int RandomKeyCreator::random(int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1,max);
	return dis(rd);
}
//--------------------------------------------------------------------------
//EOF
