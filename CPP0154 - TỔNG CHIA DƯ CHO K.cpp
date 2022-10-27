#include<iostream>

int main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		long long K, sum = 0;
		std::cin >> N >> K;
		for(int i = 1; i <= N; ++i) {
			sum += (i % K);
		}
		if(sum == K) std::cout << "1\n";
		else std::cout << "0\n";
	}
	return 0;
}
