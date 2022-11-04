#include <iostream>
#include <set>

std::string Answer(std::string s) {
	if (s[0] == '0') {
		return "INVALID\n";
	}
	std::set<char> num;
	for (int i = 0; s[i]; ++i) {
		if (s[i] > '9' || s[i] < '0') {
			return "INVALID\n";
		} else {
			num.insert(s[i]);
		}
	}
	if (num.size() == 10) {
		return "YES\n";
	}
	return "NO\n";
}

main() {
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--) {
		std::string s;
		getline(std::cin, s);
		std::cout << Answer(s);
	}
}
