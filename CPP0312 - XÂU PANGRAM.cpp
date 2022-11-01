#include<iostream>
#include<set>

int check(std::set<char> s, int K) {
	return 26 - s.size() <= K;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		std::string s;
		int K;
		getchar();
		getline(std::cin, s);
		std::cin >> K;
		std::set<char> A;
		for(auto x : s) {
			A.insert(x);
		}
		std::cout << check(A, K) << "\n";
	}
}
