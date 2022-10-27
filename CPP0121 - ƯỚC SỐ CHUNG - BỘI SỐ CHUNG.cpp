#include<iostream>
typedef long long ll;

ll GCD(ll a, ll b) {
	if(b == 0) return a;
	return GCD(b, a%b);
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		ll a, b;
		std::cin >> a >> b;
		std:: cout << a*b/GCD(a, b) << " " << GCD(a, b) << "\n";
	}
}
