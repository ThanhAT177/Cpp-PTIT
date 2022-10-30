#include<iostream>
#include<cmath>

int check(int N, int k) {
	while(!(N & 1)) {
		--k;
		if(k == 0)
			return 2;
		N /= 2;
	}
	for(int i = 3; i <= sqrt(N); ++i) {
		while(N % i == 0) {
			--k;
			if(k == 0)
				return i;
			N /= i;
		}
	}
	if(k == 1 && N > 1)
		return N;
	return -1;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N, k;
		std::cin >> N >> k;
		std::cout << check(N, k) << "\n";
	}
}
