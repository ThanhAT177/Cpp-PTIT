#include<iostream>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		long long n;
		std::cin >> n;
		std::cout << n*(n + 1)/2 << "\n";
	}
}
