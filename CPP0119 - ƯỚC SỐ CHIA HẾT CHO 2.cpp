#include<iostream>
#include<cmath>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		if(N & 1)
			std::cout << "0\n";
		else {
			int mu = 0, count = 0;
			int i = 2;
			while(!(N & 1)) {
				++mu;
				N /= 2;
			}
			count = mu;
			for(int i = 3; i <= sqrt(N); i += 2) {
				mu = 0;
				while(N % i == 0) {
					N /= i;
					++mu;
				}
				count *= (mu + 1);
			}
			if(N > 1)
				count *= 2;
			std::cout << count << "\n";
		}
	}
}
