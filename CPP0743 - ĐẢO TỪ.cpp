#include <iostream>

main() {
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		std::string s;
		getline(std::cin, s);
		std::size_t start = s.rfind(' ');
		std::size_t i;
		while (start != std::string::npos) {
			for (i = start + 1; i < s.length(); ++i) {
				std::cout << s[i];
			}
			std::cout << ' ';
			s.erase(start, i);
			start = s.rfind(' ');
		}
		std::cout << s << '\n';
	}
}
