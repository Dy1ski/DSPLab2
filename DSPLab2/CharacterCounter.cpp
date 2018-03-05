#include "CharacterCounter.h"

CharacterCounter::CharacterCounter()
{

}


CharacterCounter::operator<<(std::ostream& aOStream, const CharacterCounter& aCharacterCounter)
{
	aOStream << aCharacterCounter <<
		// Print out the OS Stream Here
		// Missing the ChracterCounter Part
		return aOStream;
};