#include<iostream>
#include<cmath>

bool prime(int N) {
	if(N < 2)
		return false;
	if(N == 2)
		return true;
	if(!(N & 1))
		return false;
	for(int i = 3; i <= sqrt(N); i += 2)
		if(N % i == 0)
			return false;
	return true;
}

main() {
	int n;
	std::cin >> n;
	if(prime(n))
		std::cout << "YES";
	else
		std::cout << "NO";
}
