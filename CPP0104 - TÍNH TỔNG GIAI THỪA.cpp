#include<iostream>

main() {
	int n;
	std::cin >> n;
	long long sum = 1, mul = 1;
	for (int i = 2; i <= n; ++i) {
		mul *= i;
		sum += mul;
	}
	std::cout << sum;
}
