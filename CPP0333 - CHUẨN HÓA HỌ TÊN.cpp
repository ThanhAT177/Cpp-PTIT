#include<iostream>

int fix(std::string &s, int i) {
	if(s[i] >= 'a')
			s[i] -= 32;
	for(i = i + 1; s[i] != ' '; ++i) {
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	return i + 1;
}

main() {
	std::string s;
	getline(std::cin, s);
	int end = s.rfind(' ');
	s.insert(end, ",");
	for(int j = end + 2; j < s.length(); ++j)
		if(s[j] >= 'a')
			s[j] -= 32;
	int i = 0;
	while(i < end) {
		i = fix(s, i);
	}
	std::cout << s;
}
