#pragma once
//--------------------------------------------------------------------------
#include <map>
#include <algorithm>
#include <string>
#include <sstream>
//--------------------------------------------------------------------------
class Key
{
	private:
		std::map<std::string,std::string> keyMap;	

	public:

		void SetLetter(std::string plain,std::string cypher)
		{
			keyMap[plain] = cypher;
		}

		void SetLetter(int pos,std::string cypher)
		{
			std::map<std::string,std::string>::iterator it;
			int i = 0;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
			{
				i++;
				if (i == pos)
				{
					keyMap[it->first] = cypher;
				}
			}
		}

		std::string GetCypher(std::string plain)
		{
			return keyMap[plain];
		}

		std::string GetCypher(int pos)
		{
			std::map<std::string,std::string>::iterator it;
			int i = 0;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
			{
				i++;
				if (i == pos)
				{
					return it->first;
				}
			}
			return "";
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

		std::string ToString()
		{
			std::stringstream ss;
			std::map<std::string,std::string>::iterator it;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
				ss << it->first 
				   << "="
				   << it->second
				   << " ";
			return ss.str();
		}
};
//--------------------------------------------------------------------------
//EOF
