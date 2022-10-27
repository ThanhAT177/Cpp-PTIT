#include<iostream>
#include<algorithm>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		int *A = new int[N];
		for(int i = 0; i < N; ++i)
			std::cin >> A[i];
		std::sort(A, A + N);
		int count = 0;
		for(int i = 0; i < N - 1; ++i)
			count += A[i + 1] == A[i] ? 0 : A[i + 1] - A[i] - 1;
		std::cout << count << "\n";
		delete []A;
	}
}
