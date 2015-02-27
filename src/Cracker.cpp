//--------------------------------------------------------------------------
#include "Cracker.h"
#include "Key.h"
#include <iostream>
#include "Substituter.h"
#include "GuessesReader.h"
//--------------------------------------------------------------------------
void Cracker::Crack(std::string cypherText,
					AbstractKeyCreator* keyCreator, 
					AbstractKeyChanger* keyChanger,
					AbstractMeassuring *meassure)
{
	GuessesReader guessReader("guesses.txt");
	guessReader.Load();
	std::map<std::string,std::string> preset
		= guessReader.GetGuesses();

	for (int i = 0  ; i < 100 ; i ++ )
	{
		Key parentKey = keyCreator->CreateKey(preset);
		std::cout << "Trying cracking with Key:" << std::endl;
		std::cout << parentKey.ToString() << std::endl;
		int noInprovementCounter  = 0;
		Substituter substituter;
		std::string clearText = substituter.Substitute(cypherText,parentKey);
		double m1 = meassure->Meassure(clearText);
		while(noInprovementCounter < 1000)
		{
			Key newKey = keyChanger->GetNextKey(parentKey,preset);
			clearText= substituter.Substitute(cypherText,newKey);
			double m2 = meassure->Meassure(clearText);

			if(m2 > m1)
			{
				m1 = m2;
				parentKey = newKey;
				noInprovementCounter = 0;
				//std::cout << clearText << std::endl;
			}
			else
			{
				noInprovementCounter++;
			}
		}
		std::cout << "Best text this round: " << std::endl;
		std::cout << "With key:" << std::endl;
		std::cout << parentKey.ToString() << std::endl;
		std::cout << cypherText << std::endl;
		std::cout << clearText << std::endl;
	}
}
bool Cracker::AssertKey(Key)
{

}
//--------------------------------------------------------------------------
//EOF
