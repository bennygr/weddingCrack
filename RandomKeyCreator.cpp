//--------------------------------------------------------------------------
#include <random>
#include "RandomKeyCreator.h"
#include <iostream>
//--------------------------------------------------------------------------
Key* RandomKeyCreator::GetNextKey(Key* currentKey)
{
	int l = currentKey->GetLength();

	int r = random(l);

	std::cout << "TEST: " << r << std::endl;
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
