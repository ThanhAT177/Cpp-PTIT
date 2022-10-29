#include<iostream>

std::string check(std::string s) {
	int l = s.length();
	for(int i = 0; i <= l/2; ++i) {
		if(s[i] & 1 || s[i] != s[l - 1 - i])
			return "NO\n";
	}
	return "YES\n";
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string x;
		std::cin >> x;
		std::cout << check(x);
	}
}
