#include<iostream>
#include<string>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		int sum = 0;
		std::cin >> s;
		for(int i = 0; i < s.length(); ++i) {
			sum = (2*sum + s[i] - '0') % 5;
		}
		if(sum % 5 == 0) std::cout << "Yes\n";
		else std::cout << "No\n";
	}
}
