#include<iostream>
#include<cmath>

int check(int N) {
	int count = 0, mu = 0;
	while(N % 2 == 0) {
		++mu;
		if(mu == 2)
			return 0;
		N /= 2;
	}
	count += mu;
	for(int i = 3; i <= sqrt(N); i += 2) {
		mu = 0;
		while(N % i == 0) {
			++mu;
			if(mu == 2)
				return 0;
			N /= i;
		}
		count += mu;
		if(count == 4)
			return 0;
	}
	if(N > 1)
		++count;
	if(count != 3)
		return 0;
	return 1;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		std::cout << check(N) << "\n";
	}
}
