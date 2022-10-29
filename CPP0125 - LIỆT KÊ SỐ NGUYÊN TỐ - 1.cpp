#include<iostream>
#include<cmath>

bool prime(int N) {
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

main() {
	int a, b;
	std::cin >> a >> b;
	if(a > b) {
		std::swap(a, b);
	}
	if(a <= 2) {
		std::cout << "2 ";
		++a;
	}
	if(a % 2 == 0)
		++a;
	for(int i = a; i <= b; i += 2)
		if(prime(i))
			std::cout << i << " ";
}
