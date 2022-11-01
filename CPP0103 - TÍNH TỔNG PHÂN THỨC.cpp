#include <iostream>
#include <iomanip>

main() {
	double sum = 0;
	int n;
	std::cin >> n;
	while (n--) {
		sum += 1.0/(n + 1);
	}
	std::cout << std::setprecision(4) << std::fixed << sum;
}
