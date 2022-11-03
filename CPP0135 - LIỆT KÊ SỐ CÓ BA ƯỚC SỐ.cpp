#include <iostream>
#include <cmath>
#include <vector>

bool IsPrime(int n) {
	for (int i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return false;
	return true;
}

main() {
	int t;
	std::cin >> t;
	std::vector<int> v = {4, 9};
	while (t--) {
		int n;
		std::cin >> n;
		if (n > v.back()) {
			int i = sqrt(v.back()) + 2;
			while (n > v.back()) {
				if (IsPrime(i)) {
					v.emplace_back(i*i);
				}
				i += 2;
			}
		}
		for (int i = 0; v[i] <= n; ++i) {
			std::cout << v[i] << ' ';
		}
		std::cout << '\n';
	}
}
