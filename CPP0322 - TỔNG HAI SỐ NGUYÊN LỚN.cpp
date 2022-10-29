#include<iostream>
#include<algorithm>

std::string calculate(std::string s1, std::string s2) {
	if(s1.length() > s2.length())
		std::swap(s1, s2);
	std::string str = "";
	int n1 = s1.length(), n2 = s2.length();
	std::reverse(s1.begin(), s1.end());
	std::reverse(s2.begin(), s2.end());
	int carry = 0;
	for(int i = 0; i < n1; ++i) {
		int sum = ((s1[i] -'0') + (s2[i] -'0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum/10;
	}
	for(int i = n1; i < n2; ++i) {
		int sum = ((s2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum/10;
	}
	if(carry)
		str.push_back(carry + '0');
	std::reverse(str.begin(), str.end());
	return str;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s1, s2;
		std::cin >> s1 >> s2;
		std::cout << calculate(s1, s2) << "\n";
	}
}
