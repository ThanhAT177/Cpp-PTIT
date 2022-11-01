#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n, d;
		std::cin >> n >> d;
		int *A = new int [n];
		for(int i = 0; i < n; ++i)
			std::cin >> A[i];
		d %= n;
		for(int i = d; i < n; ++i)
			std::cout << A[i] << " ";
		for(int i = 0; i < d; ++i)
			std::cout << A[i] << " ";
		std::cout << "\n";
		delete []A;
	}
}
