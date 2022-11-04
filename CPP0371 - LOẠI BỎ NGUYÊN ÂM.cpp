#include <iostream>

bool IsVowel(char x) {
	return x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U' || x == 'Y';
}

main() {
	std::string s;
	std::getline(std::cin, s);
	for (char x : s) {
		if (!(IsVowel(toupper(x)))) {
			std::cout << '.' << (char)tolower(x);
		}
	}
}
