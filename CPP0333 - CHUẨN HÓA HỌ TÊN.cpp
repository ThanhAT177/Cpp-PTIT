#include <iostream>

void Convert(std::string &s) {
	int key = s.rfind(' ');
	for (int i = 0; i < key; ++i) {
		s[i] = toupper(s[i]);
		for (i += 1; s[i] != ' '; ++i) {
			s[i] = tolower(s[i]);
		}
	}
	for (int i = key + 1; s[i]; ++i) {
		s[i] = toupper(s[i]);
	}
	s.insert(key, ",");
}

main() {
	std::string s;
	std::getline(std::cin, s);
	Convert(s);
	std::cout << s;
}
