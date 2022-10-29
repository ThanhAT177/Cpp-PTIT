#include<iostream>
#include<cmath>
typedef long long ll;

main() {
	int T;
	std::cin >> T;
	while(T--) {
		ll N;
		std::cin >> N;
		while(!(N & 1)) {
			std::cout << 2 << " ";
			N /= 2;
		}
		for(ll i = 3; i <= sqrt(N); i += 2) {
			while(N % i == 0) {
				N /= i;
				std::cout << i << " ";
			}
		}
		if(N > 1)
			std::cout << N;
		std::cout << "\n";
	}
}
