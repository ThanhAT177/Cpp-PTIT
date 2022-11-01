#include <iostream>

std::string LocPhat(std::string s) {
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] != '0' && s[i] != '6' && s[i] != '8') {
			return "NO\n";
		}
	}
	return "YES\n";
}

main() {
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::cout << LocPhat(s);
	}
}
