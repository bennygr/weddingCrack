#pragma once
//--------------------------------------------------------------------------
#include <map>
#include <algorithm>
#include <string>
#include <sstream>
#include <iostream>
//--------------------------------------------------------------------------
class Key
{
	private:
		std::map<std::string,std::string> keyMap;	

	public:

		void SetSecond(std::string plain,std::string cypher)
		{
			keyMap[plain] = cypher;
		}

		void SetSecond(int pos,std::string cypher)
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

		std::string GetSecond(std::string plain)
		{
			return keyMap[plain];
		}

		std::string GetSecond(int pos)
		{
			std::map<std::string,std::string>::iterator it;
			int i = 0;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
			{
				i++;
				if (i == pos)
				{
					return it->second;
				}
			}
			return "";
		}

		std::string GetFirst(int pos)
		{
			std::map<std::string,std::string>::iterator it;
			int i = 0;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
			{
				if (i == pos)
					return it->first;
				i++;
			}
			return "";
		}

		std::string GetFirst(std::string cypher)
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

		bool Assert()
		{
			std::map<std::string,int> counter;
			std::map<std::string,std::string>::iterator it;
			std::cout << this->ToString() << std::endl;
			int i = 0;
			for (it = keyMap.begin(); it != keyMap.end(); ++it )
			{
				counter[it->second] = counter[it->second] + 1;
			}
			std::cout << "KL" << std::endl;

			std::map<std::string,int>::iterator it2;
			for (it2 = counter.begin(); it2 != counter.end(); ++it2 )
			{
				std::cout << it2->first << "=" << it2->second << std::endl;
			}
		}
};
//--------------------------------------------------------------------------
//EOF
