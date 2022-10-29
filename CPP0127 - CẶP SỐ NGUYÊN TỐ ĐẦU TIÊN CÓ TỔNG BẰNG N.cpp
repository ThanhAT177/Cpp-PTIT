#include<iostream>
#include<cmath>

bool prime(int N) {
	if(N < 2)
		return false;
	if(N == 2)
		return true;
	if(N % 2 == 0)
		return false;
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

bool prime2(int N) {
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		if(prime(N - 2)) {
			std::cout << "2 " << N - 2 << "\n";
		} else if(N % 2) {
			std::cout << "-1\n";
		} else {
			bool in = true;
			for(int i = 3; i <= N/2; i += 2) {
				if(prime2(i) && prime2(N - i)) {
					std::cout << i << " " << N - i << "\n";
					in = false;
					break;
				}
			}
			if(in)
				std::cout << "-1\n";
		}
	}
}
