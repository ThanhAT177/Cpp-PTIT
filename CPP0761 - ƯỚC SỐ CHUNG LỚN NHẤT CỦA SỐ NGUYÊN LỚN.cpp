#include<iostream>
#include<string>

long long mod(std::string b, long long a) {
	long long res = 0;
	for(int i = 0; i < b.length(); ++i)
		res = (res*10 + b[i] - '0') % a;
	return res;
}

long long gcd(long long a, long long b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		long long a;
		std::string b;
		std::cin >> a >> b;
		long long tmp = mod(b, a);
		std::cout << gcd(a, tmp) << "\n";
	}
}
