#include <iostream>
#include <sstream>

long long MinSum(std::string s) {
	std::size_t i = s.find('6');
	while (i != std::string::npos) {
		s[i] = '5';
		i = s.find('6', i + 1);
	}
	std::stringstream mycin(s);
	long long num1, num2;
	mycin >> num1 >> num2;
	return num1 + num2;	
}

long long MaxSum(std::string s) {
	std::size_t i = s.rfind('5');
	while (i != std::string::npos) {
		s[i] = '6';
		i = s.rfind('5', i + 1);
	}
	std::stringstream mycin(s);
	long long num1, num2;
	mycin >> num1 >> num2;
	return num1 + num2;	
}

main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		std::string s;
		getline(std::cin, s);
		std::cout << MinSum(s) << ' ' << MaxSum(s) << '\n';
	}
}
