#include <iostream>

std::string Check(long long n) {
	long long f1 = 0, f2 = 1, fn = 0;
	while (n > fn) {
		fn = f2 + f1;
		f1 = f2;
		f2 = fn;
	}
	if (n == fn) {
		return "YES\n";
	}
	return "NO\n";
}

main() {
	int t;
	std::cin >> t;
	while(t--) {
		long long n;
		std::cin >> n;
		std::cout << Check(n);
	}
}
