#include<iostream>

main() {
	int T;
	std::cin >> T;
	getchar();
	while(T--) {
		std::string s;
		getline(std::cin, s);
		int count = 1;
		for(int i = 0; i < s.length(); ++i) {
			if(s[i + 1] == s[i])
				++count;
			else {
				std::cout << s[i] << count;
				count = 1;
			}
		}
		std::cout << "\n";
	}
}
