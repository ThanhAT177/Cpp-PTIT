#include<iostream>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		char x;
		std::cin >> x;
		if(x >= 'a' && x <= 'z')
			std::cout << char(x - 32) << "\n";
		else if(x >= 'A' && x <= 'Z')
			std::cout << char(x + 32) << "\n";
	}
}
