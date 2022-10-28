#include<iostream>
#include<string>

void phone(char &x) {
	if(x >= 'W')
		x = 9 - '0';
	else if(x >= 'T')
		x = 8 - '0';
	else if(x >= 'P')
		x = 7 - '0';
	else if(x >= 'M')
		x = 6 - '0';
	else if(x >= 'J')
		x = 5 - '0';
	else if(x >= 'G')
		x = 4 - '0';
	else if(x >= 'D')
		x = 3 - '0';
	else
		x = 2 - '0';
}

std::string fix(std::string s) {
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] >= 'a')
			s[i] -= 32;
		phone(s[i]);
	}
	return s;
}

std::string check(std::string s) {
	for(int i = 0; i < s.length(); ++i)
		if(s[i] != s[s.length() - 1 - i])
			return "NO\n";
	return "YES\n";
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		std::cin >> s;
		std::cout << check(fix(s));
	}
}
