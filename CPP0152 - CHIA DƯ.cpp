#include<iostream>

int check(int a, int m) {
	for(int x = 0; x <= m - 1; ++x) {
		if((a*x) % m == 1)
			return x;
	}
	return -1;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int a, m;
		std::cin >> a >> m;
		std::cout << check(a, m) << '\n';
	}
}
