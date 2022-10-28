#include<iostream>
#include<cmath>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		if(N % 2)
			std::cout << "0\n";
		else {
			int tmp = 0, count = 0;
			int i = 2;
			while(N % 2 == 0) {
				++tmp;
				N /= 2;
			}
			count = tmp;
			for(int i = 3; i <= sqrt(N); i += 2) {
				tmp = 0;
				while(N % i == 0) {
					N /= i;
					++tmp;
				}
				count *= (tmp + 1);
			}
			if(N > 1)
				count *= 2;
			std::cout << count << "\n";
		}
	}
}
