#include<iostream>

int check(std::string s) {
	int N = s.length();
	int sum = 0;
	for(int i = 0; i < N; ++i) {
		if (i & 1)
			sum += (s[i] -'0');
		else
			sum -= (s[i] -'0');
	}
	return (sum % 11 == 0);
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		std::cin >> s;
		std::cout << check(s) << "\n";
	}
}
