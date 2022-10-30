#include<iostream>
#include<cmath>

bool prime(long long N) {
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

long long check(long long N) {
	long long kq;
	while(!(N & 1))
		N = N >> 1;
	if(N == 1)
		return 2;
	for(int i = 1; i <= sqrt(N); i += 2) {
		if(N % i == 0) {
			if(prime(N/i))
				return N/i;
			if(prime(i))
				kq = i;
		}
	}
	return kq;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		long long N;
		std::cin >> N;
		std::cout << check(N) << "\n";
	}
}
