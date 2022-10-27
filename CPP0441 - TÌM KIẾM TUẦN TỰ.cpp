#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n, X, pos = -1, tmp;
		std::cin >> n >> X;
		for(int i = 1; i <= n; ++i) {
			std::cin >> tmp;
			if(tmp == X && pos == -1)
				pos = i;
		}
		std::cout << pos << "\n";
	}
}
