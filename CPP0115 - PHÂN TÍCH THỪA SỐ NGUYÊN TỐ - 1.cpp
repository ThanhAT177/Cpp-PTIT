#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		int i = 2, count = 0;
		while(i <= N) {
			if(N % i == 0) {
				if(!count) {
					std::cout << i << " ";
					++count;
				}
				else ++count;
				N /= i;
			}
			else {
				if(count) std::cout << count << " ";
				count = 0;
				++i;
			}
		}
		std::cout << count << "\n";
	}
}
