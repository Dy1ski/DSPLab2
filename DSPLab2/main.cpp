#include "CharacterCounter.h"

using namespace std;

char main()
{
	CharacterCounter lCounter;
	unsigned char lChar;
	while (cin >> lChar)
	{
		lCounter.count(lChar);
	}
	cout << lCounter;

	return 0;
};