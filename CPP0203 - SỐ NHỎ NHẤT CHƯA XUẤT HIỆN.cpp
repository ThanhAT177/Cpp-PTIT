#include <iostream>
#include <algorithm>

int FindMin(int a[], int n) {
	std::sort(a, a + n);
	int min = 1;
	auto it = std::upper_bound(a, a + n, 0);
	for (; it < a + n; ++it) {
		if (*it == min) {
			++min;
		} else if (*it > min) {
			break;
		}
	}
	return min;
}

main() {
	int t;
	std::cin >> t;
	while(t--) {
		int n;
		std::cin >> n;
		int a[n] = {};
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		std::cout << FindMin(a, n) << '\n';
	}
}
