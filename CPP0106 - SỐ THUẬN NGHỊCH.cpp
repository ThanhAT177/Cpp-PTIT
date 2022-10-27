#include<iostream>
typedef long long ll;

ll nghich_dao(ll N) {
	ll temp = N, dao = 0;
	while(temp) {
		dao *= 10;
		dao += temp % 10;
		temp /= 10;
	}
	return dao;
}

void check(ll N) {
	if(nghich_dao(N) == N)
		std::cout << "YES\n";
	else std::cout << "NO\n";
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		ll N;
		std::cin >> N;
		check(N);
	}
}
