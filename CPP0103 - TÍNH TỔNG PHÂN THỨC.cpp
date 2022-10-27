#include<iostream>
#include<iomanip>

main() {
	double sum = 0;
	int N;
	std::cin >> N;
	while(N--) {
		sum += 1.0/(N + 1);
	}
	std::cout << std::setprecision(4) << std::fixed << sum;
}
