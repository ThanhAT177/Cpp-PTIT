#include<iostream>
#include<cmath>
#include<vector>

bool prime(int N) {
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

main() {
	int T;
	std::cin >> T;
	std::vector<int> A(4, 0);
	A[2] = 2;
	A[3] = 3;
	while(T--) {
		int M, N;
		std::cin >> M >> N;
		if(N >= A.back()) {
			int i = A[A.size() - 1];
			while(N >= A.back()) {
				i += 2;
				if(prime(i))
					A.push_back(i);
			}
		}
		for(int i = 2; A[i] <= N; ++i)
			if(A[i] >= M)
				std::cout << A[i] << " ";
		std::cout << "\n";
	}
	A.clear();
}
