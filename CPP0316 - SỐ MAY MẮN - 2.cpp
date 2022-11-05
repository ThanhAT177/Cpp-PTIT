#include <iostream>

bool Check(std::string s) {
	if (s[0] == '0' && !s[1]) {
		return false;
	}
	int sum = 0;
	for (char x : s) {
		sum += x - '0';
		sum %= 9;
	}
	return (sum == 0) ? true : false;
}

main() {
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--) {
		std::string s;
		getline(std::cin, s);
		std::cout << Check(s) << '\n';
	}
}
