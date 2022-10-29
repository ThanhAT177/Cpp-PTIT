#include<iostream>
#include<cmath>

std::string check(std::string s) {
	for(int i = 0; i < s.length() - 1; ++i) {
		if(abs(s[i + 1] - s[i]) != 1)
			return "NO\n";
	}
	return "YES\n";
}

int main() {
	std::string s;
	int T;
	std::cin >> T;
	while(T--) {
		std::cin >> s;
		std::cout << check(s);
	}
	return 0;
}
