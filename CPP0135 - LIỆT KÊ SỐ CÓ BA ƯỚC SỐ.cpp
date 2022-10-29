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
	std::vector<int> A(3, 0);
	A[1] = 4;
	A[2] = 9;
	while(T--) {
		int N;
		std::cin >> N;
		if(N > A.back()) {
			int i = sqrt(A.back());
			while(N > A.back()) {
				i += 2;
				if(prime(i))
					A.push_back(i*i);
			}
		}
		for(int i = 1; A[i] <= N; ++i)
				std::cout << A[i] << " ";
		std::cout << "\n";
	}
	A.clear();
}
