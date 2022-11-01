#include <iostream>

main() {
	int t;
	std::cin >> t;
	while (t--) {
		char x;
		std::cin >> x;
		if(x >= 'a' && x <= 'z') {
			std::cout << char(x - 32) << "\n";
		} else if (x >= 'A' && x <= 'Z') {
			std::cout << char(x + 32) << "\n";
		}
	}
}
