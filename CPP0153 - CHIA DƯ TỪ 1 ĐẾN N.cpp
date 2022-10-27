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
		std::cout << sum << "\n";
	}
	return 0;
}
