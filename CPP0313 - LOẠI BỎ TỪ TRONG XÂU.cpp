#include<iostream>

main() {
	std::string s1, s2;
	getline(std::cin, s1);
	getline(std::cin, s2);
	s1.erase(s1.find(s2), s2.length() + 1);
	std::cout << s1;
}
