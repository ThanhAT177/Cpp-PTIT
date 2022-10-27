#include<iostream>
#include<cmath>

main() {
	int N;
	std::cin >> N;
	for(int i = 2; i <= sqrt(N); ++i) {
		int count = 0;
		if(N % i == 0) {
			while(N % i == 0) {
				++count;
				N /= i;
			}
			std::cout<< i << " " << count << "\n";
		}
	}
	if(N > 1) std::cout << N << " " << 1;
}
