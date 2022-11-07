#include <iostream>
#include <vector>
#include <sstream>

void Print(std::vector<std::string> v, int n) {
	if (n & 1) {
		std::vector<std::string>::iterator end = v.end() - 1;
		std::cout << *end;
		for (std::vector<std::string>::iterator start = v.begin(); start != end;
		     ++start) {
			std::cout << ' ' << *start;
		}
		std::cout << '\n';
	} else {
		for (std::vector<std::string>::iterator it = v.begin() + 1; it != v.end();
		     ++it) {
			std::cout << *it << ' ';
		}
		std::cout << *v.begin() << '\n';
	}
}

void Convert(std::vector<std::string> &v, std::string s) {
	std::stringstream mycin(s);
	std::string tmp;
	while (mycin >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for (int i = 1; tmp[i]; ++i) {
			tmp[i] = tolower(tmp[i]);
		}
		v.emplace_back(tmp);
	}
}

void Solve() {
	int n;
	std::cin >> n;
	std::string s;
	std::cin.ignore();
	getline(std::cin, s);
	std::vector<std::string> v;
	Convert(v, s);
	Print(v, n);
}

main () {
	int t;
	std::cin >> t;
	while (t--) {
		Solve();
	}
}
