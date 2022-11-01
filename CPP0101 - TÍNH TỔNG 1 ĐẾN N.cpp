#include<iostream>

main() {
	int T;
	std::cin >> T;
	while (T--) {
		long long N;
		std::cin >> N;
		std::cout << N*(N + 1)/2 << "\n";
	}
}
