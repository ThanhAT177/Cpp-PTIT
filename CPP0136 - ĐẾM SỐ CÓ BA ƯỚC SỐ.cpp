#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

std::vector<int> v = {2, 3};

int Isprime(int n) {
	for (int i = 3; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void Solve(int n) {
	if (n > v.back()) {
		int i = v.back() + 2;
		while (n > v.back()) {
			if (Isprime(i)) {
				v.emplace_back(i);
			}
			i += 2;
		}
		if (n == v.back()) {
			std::cout << v.size() << '\n';
		} else {
			std::cout << v.size() - 1 << '\n';
		}
	} else {
		auto it = std::upper_bound(v.begin(), v.end(), n);
		std::cout << it - v.begin() << '\n';
	}
}

main() {
	int t;
	std::cin >> t;
	while (t--) {
		long long n;
		std::cin >> n;
		n = sqrt(n);
		Solve(n);
	}
}
