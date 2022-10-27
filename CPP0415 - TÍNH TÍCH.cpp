#include<iostream>
#include<algorithm>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n, m;
		std::cin >> n >> m;
		int *A = new int[n];
		int *B = new int[m];
		for(int i = 0; i < n; ++i)
			std::cin >> A[i];
		for(int i = 0; i < m; ++i)
			std::cin >> B[i];
		std::sort(A, A + n);
		std::sort(B, B + m);
		std::cout << (long long) A[n - 1]*B[0] << "\n";
		delete []A;
	}
}
