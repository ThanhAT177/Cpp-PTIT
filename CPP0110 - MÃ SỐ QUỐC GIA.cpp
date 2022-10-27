#include<iostream>
#include<string>

int main() {
	std::string s;
	int T;
	std::cin >> T;
	while(T--) {
		std::cin >> s;
		int x = s.find("084");
		s.erase(x, 3);
		std::cout << s << "\n";
	}
	return 0;
}
