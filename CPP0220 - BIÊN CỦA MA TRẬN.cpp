#include <iostream>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int a[n][n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				std::cin >> a[i][j];
			}
		}
		for (int j = 0; j < n; ++j) {
			std::cout << a[0][j] << ' ';
		}
		std::cout << '\n';
		for (int i = 1; i < n - 1; ++i) {
			std::cout << a[i][0] << ' ';
			for (int j = 1; j < n - 1; ++j) {
				std::cout << "  ";
			}
			std::cout << a[i][n - 1] << '\n';
			
		}
		for (int j = 0; j < n; ++j) {
			std::cout << a[n - 1][j] << ' ';
		}
		std::cout << '\n';
	}
}
