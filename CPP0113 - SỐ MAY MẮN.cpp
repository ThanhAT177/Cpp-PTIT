#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int N;
		std::cin >> N;
		if(N % 100 == 86)
			std::cout << 1 << "\n";
		else
			std::cout << 0 << "\n";
	}
}
