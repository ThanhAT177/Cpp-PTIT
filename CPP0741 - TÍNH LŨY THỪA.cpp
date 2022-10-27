#include<iostream>

int luy_thua(int x, int y, int p) {
	if(y == 0)	return 1;
	int tich = luy_thua(x, y/2, p);
	tich = ((long long)tich*tich) % p;
	if(y % 2)	tich = ((long long)tich*x) % p;
	return tich;
}

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int x, y, p;
		std::cin >> x >> y >> p;
		std::cout << luy_thua(x, y, p) << "\n";
	}
}
