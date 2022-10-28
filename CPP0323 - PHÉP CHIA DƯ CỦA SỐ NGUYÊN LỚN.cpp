#include<iostream>
#include<string>

long long mod(std::string N, long long M) {
	long long res = 0;
	for(int i = 0; i < N.length(); ++i)
		res = (res*10 + N[i] - '0') % M;
	return res;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		long long M;
		std::string N;
		std::cin >> N >> M;
		std::cout << mod(N, M) << "\n";
	}
}
