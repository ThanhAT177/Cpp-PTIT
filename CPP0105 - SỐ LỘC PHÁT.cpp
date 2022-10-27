#include<iostream>
#include<string>

std::string loc_phat(std::string s) {
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] != '0' && s[i] != '6' && s[i] != '8')
			return "NO\n";
	}
	return "YES\n";
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		std::cin >> s;
		std::cout << loc_phat(s);
	}
}
