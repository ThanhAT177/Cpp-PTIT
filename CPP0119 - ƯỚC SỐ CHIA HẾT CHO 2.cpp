#include<iostream>
#include<cmath>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N, count = 0;
		std::cin >> N;
		if(N % 2)
			std::cout << "0\n";
		else {
			for(int i = 1; i < sqrt(N); ++i) {
				if(N % i == 0) {
					if(i % 2 == 0)
						++count;
					if((N/i) % 2 == 0)
						++count;
				}
			}
			int tmp = sqrt(N);
			if(tmp*tmp == N && tmp % 2 == 0)
				++count;
			std::cout << count << "\n";
		}
	}
}
