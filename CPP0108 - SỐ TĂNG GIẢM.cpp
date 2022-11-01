#include <iostream>
#include <cmath>

int CheckIncrease(int n) {
	while(n >= 10) {
		int last = n % 10;
		n /= 10;
		if(n % 10 >= last)
			return 0;
	}
	return 1;
}

int CheckDecrease(int n) {
	while(n >= 10) {
		int last = n % 10;
		n /= 10;
		if(n % 10 <= last)
			return 0;
	}
	return 1;
}

int SoTangGiam(int n) {
	int last = n % 10;
	n /= 10;
	if (n % 10 < last)
		return CheckIncrease(n);
	if (n % 10 > last)
		return CheckDecrease(n);
	return 0;
}

int Prime(int n) {
	if (!(n & 1))
		return 0;
	for (int i = 3; i <= sqrt(n); i += 2)
		if(n % i == 0)
			return 0;        
	return 1;
}

main() {
	int t;
	std::cin >> t;
	while(t--) {
		int n, count = 0;
		std::cin >> n;
		for(int i = pow(10, n - 1); i < pow(10, n); ++i)
			if(SoTangGiam(i) && Prime(i))
				++count;
		std::cout << count << "\n";
	}
}
