#include "CharacterCounter.h"
#include <iostream>

using namespace std;

int main()
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