#include "CharacterCounter.h"

using namespace std;

CharacterCounter::CharacterCounter() 
{
		fTotalNumberOfCharacters = 0;
		fCharacterCounts;
}

void CharacterCounter::count(unsigned char aCharacter) // acharacter is what's passed in by the main and you add it to the array
{
	fTotalNumberOfCharacters++; // counts everytime it's called by main
	fCharacterCounts[aCharacter]++; // adds the character to the array
}

ostream& operator<<(ostream& aOStream, const CharacterCounter& aCharacterCounter) // .. call the member variables
{
	// for loop
	
		for (int i = 0; i < aCharacterCounter.fTotalNumberOfCharacters; i++) //
		{
			aOStream << "Character Counts for " << aCharacterCounter.fTotalNumberOfCharacters << " characters: " << "\n" << aCharacterCounter.fCharacterCounts[i] << endl;
			/// add a loop of 255 which resets the array to 0 everytime you print out 
		}
	
		
		return aOStream;
}