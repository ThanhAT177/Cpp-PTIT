#include <iostream>
#include <set>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin.ignore();
		getline(std::cin, s);
		std::set<char> out;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] != ' ') {
				out.insert(s[i]);
			}
		}
		for (char x : out) {
			std::cout << x << ' ';
		}
		std::cout << '\n';
	}
}
