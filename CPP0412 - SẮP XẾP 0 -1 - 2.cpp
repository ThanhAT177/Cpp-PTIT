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
		for(int i = 0; i < n; ++i)
			std::cout << *(A + i) << " ";
		std::cout << "\n";
		delete []A;
	}
}
