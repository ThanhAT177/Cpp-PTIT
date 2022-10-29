#include<iostream>
#include<cmath>

int prime(long long N) {
	if(N == 2)
		return 1;
	if(!(N & 1))
		return 0;
	for(long long i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return 0;
	return 1;
}

int perfect_num(long long N) {
	for(long long i = 0; i < 20; ++i) {
		if(prime(i) && prime((1ll << i) - 1))
			if((1ll << (2*i)) - (1ll << i) == 2*N)
				return 1;
	}
	return 0;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		long long N;
		std::cin >> N;
		std::cout << perfect_num(N) << "\n";
	}
}
