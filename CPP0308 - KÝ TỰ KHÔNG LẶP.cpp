#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		std::cin >> s;
		int ascii[127] = {};
		for(int i = 0; i < s.length(); ++i)
			++ascii[s[i]];
		for(int i = 0; i < s.length(); ++i)
			if(ascii[s[i]] == 1)
				std::cout << s[i];
		std::cout << "\n";
	}
}
