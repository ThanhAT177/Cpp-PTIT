#include<iostream>
#include<cmath>

int prime(int N) {
	if(N == 2)
		return 1;
	if(N % 2 == 0)
		return 0;
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return 0;
	return 1;
}

int perfect_num(long long N) {
	for(int i = 2; i < 20; ++i) {
		if(prime(i) && prime(pow(2, i) - 1))
			if(pow(2, 2*i) - pow(2, i) == 2*N)
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
