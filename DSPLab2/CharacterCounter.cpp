#include "CharacterCounter.h"

CharacterCounter::CharacterCounter()
{
	fTotalNumberOfCharacters = 0;
	count = 0;
}


CharacterCounter::operator<<(std::ostream& aOStream, const CharacterCounter& aCharacterCounter)
{
	aOStream << aCharacterCounter <<
		// Print out the OS Stream Here
		// Missing the ChracterCounter Part
		return aOStream;
};
