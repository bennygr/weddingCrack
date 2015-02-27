#include "KeyRandomizer.h"
#include <random>

Key KeyRandomizer::Randomize(Key key,std::map<std::string,std::string> preset)
{
	//detect possibles key parts to swap which are not preset 
	std::vector<std::string> tmp;
	for(int i=0; i<key.GetLength();i++)
	{
		std::string skey = key.GetFirst(i);
		if(preset.find(skey) == preset.end())
		{
			tmp.push_back(skey);
		}
	}
	
	//Swap to random parts
	int pos1 = Random(tmp.size()-1);
	int pos2 = Random(tmp.size()-1);

	std::string key1 = tmp.at(pos1);
	std::string key2 = tmp.at(pos2);

	std::string cypher1 = key.GetSecond(key1);
	std::string cypher2 = key.GetSecond(key2);

	key.SetSecond(key1,cypher2);
	key.SetSecond(key2,cypher1);

	return key;
}

int KeyRandomizer::Random(int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,max);
	return dis(rd);
}
