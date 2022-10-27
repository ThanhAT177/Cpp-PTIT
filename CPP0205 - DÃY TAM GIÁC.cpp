#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N, max = -1;
		std::cin >> N;
		int *A = new int[N];
		for(int i = 0; i < N; ++i) {
			std::cin >> A[i];
			if(A[i] > max)
				max = A[i];
		}
		std::cout << max << "\n";
		delete []A; 
	}
}
