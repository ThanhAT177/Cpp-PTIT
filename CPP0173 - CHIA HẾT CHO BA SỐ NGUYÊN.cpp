#include <iostream>
#include <algorithm>
#include <cmath>

long long lcm(long long a, long long b, long long c) {
	long long tmp = a*b/std::__gcd(a, b);
	return tmp*c/std::__gcd(tmp, c);
}

long long Calculate(long long Ans, int n) {
	return (floor(log10(Ans)) + 1 > n) ? -1 : Ans*(long long)ceil(pow(10, n - 1)/Ans);
}

main() {
	int t;
	std::cin >> t;
	while (t--) {
		long long n, x, y, z;
		std::cin >> x >> y >> z >> n;
		std::cout << Calculate(lcm(x, y, z), n) << '\n';
	}
}
