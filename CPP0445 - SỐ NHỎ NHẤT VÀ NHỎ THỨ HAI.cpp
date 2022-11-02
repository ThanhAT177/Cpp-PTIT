#include <iostream>
#include <algorithm>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int a[n] = {};
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		if (a[0] == a[n - 1]) {
			std::cout << -1 << '\n';
		} else {
			std::cout << a[0] << ' ';
			for (int i = 1; i < n - 1; ++i) {
				if (a[i] != a[0]) {
					std::cout << a[i] << '\n';
					break;
				}
			}
		}
	}
}
