#include <iostream>
#include "LetterFinder.h"

int main()
{
	std::vector<char> letters = { 'c','f','j' };
	char target = 'a';

	char ans = nextGreatestLetter(letters, target);
	std::cout << ans << std::endl;
}
