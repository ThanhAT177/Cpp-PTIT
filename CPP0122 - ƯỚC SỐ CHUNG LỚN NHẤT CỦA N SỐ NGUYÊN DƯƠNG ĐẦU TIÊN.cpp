#include<iostream>
#include<vector>
#include<algorithm>

long long lcm(long long a, long long b) {
	return a*b/std::__gcd(a, b);
}

main() {
	int T;
	std::cin >> T;
	std::vector<long long> A;
	A.push_back(1);
	while(T--) {
		int N;
		std::cin >> N;
		if(N > A.size())
			for(int i = A.size() + 1; i <= N; ++i)
				A.push_back(lcm(A[i - 2], i));
		std::cout << A[N - 1] << "\n";
	}
	A.clear();
}
