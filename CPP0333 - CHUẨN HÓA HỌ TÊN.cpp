#include<iostream>

main() {
	std::string s;
	getline(std::cin, s);
	int end = s.rfind(' ');
	for(int i = end + 1; i < s.length(); ++i)
		s[i] = toupper(s[i]);
	for(int i = 1; i < end; ++i) {
		if(s[i - 1] == ' ')
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	s.insert(end, ",");
	std::cout << s;
}
