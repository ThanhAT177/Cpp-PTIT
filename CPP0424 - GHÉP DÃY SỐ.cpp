#include <iostream>
#include <algorithm>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int k, n;
		std::cin >> k >> n;
		int a[k*n] = {};
		for (int i = 0; i < k*n; ++i) {
			std::cin >> a[i];
		}
		std::sort(a, a + k*n);
		for(int i = 0; i < k*n; ++i) {
			std::cout << a[i] << ' ';
		}
		std::cout << '\n';
	}
}
