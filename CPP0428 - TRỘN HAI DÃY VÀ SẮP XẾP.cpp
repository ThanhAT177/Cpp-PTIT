#include <iostream>
#include <algorithm>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n, m;
		std::cin >> n >> m;
		int a[n + m] = {};
		for (int i = 0; i < n + m; ++i) {
			std::cin >> a[i];
		}
		std::sort(a, a + n + m);
		for(int i = 0; i < n + m; ++i) {
			std::cout << a[i] << ' ';
		}
		std::cout << '\n';
	}
}
