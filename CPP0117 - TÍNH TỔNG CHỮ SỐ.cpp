#include<iostream>

void tinh_tong(int &N) {
	int sum = 0;
	while(N) {
		sum += N % 10;
		N /= 10;
	}
	N = sum;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		while(N > 9) tinh_tong(N);
		std::cout << N << "\n";
	}
}
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
