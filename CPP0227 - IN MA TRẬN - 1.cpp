#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		int **A = new int*[N];
		for(int i = 0; i < N; ++i)
			A[i] = new int[N];
		for(int i = 0; i < N; ++i) {
			for(int j = 0; j < N; ++j) {
				std::cin >> A[i][j];
			}
		}
		for(int i = 0; i < N; ++i) {
			if(i % 2 == 0) {
				for(int j = 0; j < N; ++j) {
					std::cout << A[i][j] << " ";
				}
			} else {
				for(int j = N - 1; j >= 0; --j) {
					std::cout << A[i][j] << " ";
				}
			}
		}
		std::cout << "\n";
		for(int i = 0; i < N; ++i)
			delete []A[i];
		delete []A;
	}
}
