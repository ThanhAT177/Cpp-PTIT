#include <iostream>
typedef long long ll;

ll NghichDao(ll n) {
	ll tmp = n, dao = 0;
	while(tmp) {
		dao *= 10;
		dao += tmp % 10;
		tmp /= 10;
	}
	return dao;
}

void ThuanNghich(ll n) {
	if (NghichDao(n) == n) {
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
	}
}

main() {
	int t;
	std::cin >> t;
	while(t--) {
		ll n;
		std::cin >> n;
		ThuanNghich(n);
	}
}
