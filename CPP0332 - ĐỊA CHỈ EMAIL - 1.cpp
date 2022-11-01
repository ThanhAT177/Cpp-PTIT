#include<iostream>
#include<cctype>

main() {
	std::string s;
	getline(std::cin, s);
	std::size_t end = s.rfind(' ');
	for(std::size_t i = end + 1; i < s.length(); ++i)
		std::cout << (char)tolower(s[i]);
	std::cout << (char)tolower(s[0]);
	std::size_t i = s.find(' ');
	while(i != end) {
		std::cout << (char)tolower(s[i + 1]);
		i = s.find(' ', i + 1);
	}
	std::cout << "@ptit.edu.vn";
}
