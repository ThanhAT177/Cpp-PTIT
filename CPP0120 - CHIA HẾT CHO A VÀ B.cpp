#include<iostream>
#include<algorithm>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int M, N, A, B;
		std::cin >> M >> N >> A >> B;
		int tmp = A*B/std::__gcd(A, B);
		int miss = (M % A == 0 || M % B == 0)? 1 : 0;
		std::cout << N/A - M/A + N/B - M/B - (N/tmp - M/tmp) + miss << "\n";
	}
}
