#pragma once
//--------------------------------------------------------------------------
#include <map>
#include <algorithm>
#include <string>
//--------------------------------------------------------------------------
class Key
{
	private:
		std::map<std::string,std::string> keyMap;	

	public:

		void AddLetter(std::string plain,std::string cypher)
		{
			keyMap[plain] = cypher;
		}

		std::string GetCypher(std::string plain)
		{
			return keyMap[plain];
		}

		std::string GetPlain(std::string cypher)
		{
			std::map<std::string,std::string>::iterator it;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
				if (it->second == cypher)
					return it->first;
			return "";
		}

		size_t GetLength()
		{
			return this->keyMap.size();
		}
};
//--------------------------------------------------------------------------
//EOF
