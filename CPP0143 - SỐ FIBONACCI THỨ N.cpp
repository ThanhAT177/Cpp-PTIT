#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		long long f1 = 1, f2 = 1, fn;
		int N;
		std::cin >> N;
		if(N == 1 || N == 2) {
			std::cout << "1\n";
		} else {
			for(int i = 3; i <= N; i++) {
				fn = f1 + f2;
				f1 = f2;
				f2 = fn;
			}
			std::cout << fn << "\n";
		}
	}
	return 0;
}
