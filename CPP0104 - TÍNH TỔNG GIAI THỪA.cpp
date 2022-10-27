#include<iostream>

main() {
	int N;
	std::cin >> N;
	long long sum = 1, mul = 1;
	for(int i = 2; i <= N; ++i) {
		mul *= i;
		sum += mul;
	}
	std::cout << sum;
}
