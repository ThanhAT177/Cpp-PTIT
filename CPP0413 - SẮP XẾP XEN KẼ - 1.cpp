#include<iostream>
#include<algorithm>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n;
		std::cin >> n;
		int *A = new int[n];
		for(int i = 0; i < n; ++i)
			std::cin >> A[i];
		std::sort(A, A + n);
		for(int i = 0; i < n/2; ++i)
			std::cout << A[n - i - 1] << " " << A[i] << " ";
		if(n & 1)
			std::cout << A[n/2];
		std::cout << "\n";
		delete []A;
	}
}
