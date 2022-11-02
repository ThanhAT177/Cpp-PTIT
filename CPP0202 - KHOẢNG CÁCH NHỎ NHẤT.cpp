#include <iostream>
#include <algorithm>

int MinDistance(int a[], int n) {
	std::sort(a, a + n);
	int minimum = 1 << 31 - 1;
	for (int i = 1; i < n - 1; i += 2) {
		minimum = std::min(a[i] - a[i - 1], minimum);
		minimum = std::min(a[i + 1] - a[i], minimum);
	}
	return (n & 1) ? minimum : std::min(minimum, a[n - 1] - a[n - 2]);
}

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
		std::cout << MinDistance(a, n) << '\n';
	}
}
