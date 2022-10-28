#include<iostream>
#include<cmath>

int check_tang(int N) {
	while(N >= 10) {
		int last = N % 10;
		N /= 10;
		if(N % 10 >= last)
			return 0;
	}
	return 1;
}

int check_giam(int N) {
	while(N >= 10) {
		int last = N % 10;
		N /= 10;
		if(N % 10 <= last)
			return 0;
	}
	return 1;
}

int stg(int N) {
	int last = N % 10;
	N /= 10;
	if(N % 10 < last)
		return check_tang(N);
	if(N % 10 > last)
		return check_giam(N);
	return 0;
}

int prime(int N) {
	if(N % 2 == 0)
		return 0;
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return 0;        
	return 1;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N, count = 0;
		std::cin >> N;
		for(int i = pow(10, N - 1); i < pow(10, N); ++i)
			if(stg(i) && prime(i))
				count++;
		std::cout << count << "\n";
	}
}
