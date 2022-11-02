#include <iostream>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n, q;
		std::cin >> n >> q;
		int a[n + 1] = {};
		for (int i = 1; i <= n; ++i) {
			std::cin >> a[i];
			a[i] += a[i - 1];
		}
		while (q--) {
			int l, r;
			std::cin >> l >> r;
			std::cout << a[r] - a[l - 1] << '\n';
		}
	}
}
